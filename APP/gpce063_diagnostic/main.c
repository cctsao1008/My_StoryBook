// FreeRTOS include files 
#include "..\..\FreeRTOS\source\include\FreeRTOS.h" 
#include "..\..\FreeRTOS\source\include\task.h" 
#include "..\..\FreeRTOS\source\include\croutine.h"  
#include "..\..\FreeRTOS\source\include\semphr.h"

// GPCE063A
#include    "..\..\BSP\include\GPCE063.h"
#include "SACM.h"
//**************************************************************************
// Contant Defintion Area
//**************************************************************************
#define MaxSpeechNum		1		// Max. of speech in resource
#define MaxVolumeNum		16		// Max. of volume settings

#define Foreground			0
#define Background			1
#define ServiceType		Foreground
//#define ServiceType			Background

//**************************************************************************
// Function Call Publication Area
//**************************************************************************
//void SPI_Initial();
void USER_A1600_SetStartAddr(int SpeechIndex);
void USER_A1600_SetStartAddr_Con(int SpeechIndex);

//**************************************************************************
// Global Variable Defintion Area
//**************************************************************************
#if 0
unsigned Key;
unsigned SpeechIndex;
unsigned VolumeIndex;
unsigned DAC_FIR_Type;
unsigned PauseFlag;
unsigned PlayCon;
#endif

//#define heap_size  256

void Reset_Watchdog(void);
int BSP_INIT(void);
void vToggleLED(void);

void Task_01(void *pvParameters);
void Task_02(void *pvParameters);
void CDecoder(void *pvParameters);


long count = 0;
portTickType xTick = 0; 
portSTACK_TYPE stack[configTOTAL_HEAP_SIZE];

int main()
{
	unsigned int arg = 1000;

    #if 1
    count = sizeof(portSTACK_TYPE)*configTOTAL_HEAP_SIZE;
    // char, unsigned char
    count = sizeof(char);           // 1 word
    count = sizeof(unsigned char);  // 1 word
    // int, unsigned int
    count = sizeof(int);            // 1 word
    count = sizeof(unsigned int);   // 1 word
    // short, unsigned short
    count = sizeof(short);          // 1 word
    count = sizeof(unsigned short); // 1 word
    // long, unsigned long
    count = sizeof(long);           // 2 words
    count = sizeof(unsigned long);  // 2 words
    // float
    count = sizeof(float);          // 2 words
    // double
    count = sizeof(double);         // 2 words
    #endif

    BSP_INIT();
    
    init_heap((size_t)stack,configTOTAL_HEAP_SIZE);
    
    xTaskCreate(Task_01, (signed portCHAR *)"Task_01", configMINIMAL_STACK_SIZE, (void*)&arg, 4, NULL );
    //xTaskCreate(Task_02, (signed portCHAR *)"Task_02", configMINIMAL_STACK_SIZE, (void*)&arg, 6, NULL );
    xTaskCreate(CDecoder, (signed portCHAR *)"CDecoder", configMINIMAL_STACK_SIZE, (void*)&arg, 3, NULL );
    
    // RunSchedular    
    vTaskStartScheduler();     
    
    // RunSchedular fail!!
    while(1)
    {
    	P_Watchdog_Clear = C_Watchdog_Clear;
        count++;    
    }
    
    return 0;
}

void Task_01(void *pvParameters)
{	
	unsigned int *x = pvParameters;
    *x = *x;
    
    while(1)
    {
    	vTaskDelay( 5000 / portTICK_RATE_MS );
    	SACM_A1600_Play(0, DAC1 + DAC2, Ramp_Up + Ramp_Dn);		// play speech
    }
}

void Task_02(void *pvParameters)
{	
	#if 0
    while(1)
    {
    	vTaskDelay( 3 );
        count++;
    }
    #else
    unsigned int *x = pvParameters;
    const portTickType xDelay = (*x) / portTICK_RATE_MS;

    for( ;; )
    {
        /* Simply toggle the LED every 500ms, blocking between each toggle. */
        vToggleLED();
        vTaskDelay( xDelay );
        count++;
    }
    #endif
}

void Reset_Watchdog(void)
{
    P_Watchdog_Clear = C_Watchdog_Clear;
}

int BSP_INIT(void)
{
    // Config System Clock
    P_Int_Ctrl = 0x0000;
    P_Int_Status = 0xFFFF;
    P_System_Clock = 0x0098;
    
    // Config IOB as Output Port
    P_IOB_Data->data   = 0x0000;
    P_IOB_Attrib->data = 0xFFFF;
    P_IOB_Dir->data    = 0xFFFF;

    System_Initial();			// System initial
    
    //portENABLE_INTERRUPTS();
    return 0;
}

void vToggleLED(void)
{
	P_IOB_Data->data = ~(P_IOB_Data->data);
}

void CDecoder(void *pvParameters)
{
	unsigned Key = 0;
	unsigned SpeechIndex = 0;
	unsigned VolumeIndex = 9;
	unsigned DAC_FIR_Type = C_DAC_FIR_Type2;
	//unsigned PauseFlag = 0;
	unsigned PlayCon = 0;

	//System_Initial();			// System initial
	//SPI_Initial();				// SPI initial
	SACM_A1600_Initial();		// A1600 initial
	SACM_A1600_Play(SpeechIndex, DAC1 + DAC2, Ramp_Up + Ramp_Dn);	// playback with auto mode
	
	while(1)
	{
		Key = SP_GetCh();
		switch(Key)
		{	
			case 0x0000:
				break;

			case 0x0001:	// IOA0 + Vcc
				PlayCon = 0;
				SACM_A1600_Play(SpeechIndex, DAC1 + DAC2, Ramp_Up + Ramp_Dn);		// play speech
				break;

			case 0x0002:	// IOA1 + Vcc
				PlayCon = 0;
				SACM_A1600_Stop();						// stop
				break;

			case 0x0004:	// IOA2 + Vcc
				SACM_A1600_Pause();						// playback pause
				break;

			case 0x0008:	// IOA3 + Vcc
				SACM_A1600_Resume();					// playback resuem
				break;
			
			case 0x0010:	// IOA4 + Vcc
				if(++SpeechIndex >= MaxSpeechNum)		// next speech
					SpeechIndex = 0;
				PlayCon = 0;
				SACM_A1600_Play(SpeechIndex, DAC1 + DAC2, Ramp_Up + Ramp_Dn);		// play next speech
				break;

			case 0x0020:	// IOA5 + Vcc
				if(++VolumeIndex >= MaxVolumeNum)
					VolumeIndex = 0;
				USER_A1600_Volume(VolumeIndex);			// volume up
				break;

			case 0x0040:	// IOA6 + Vcc
				if(++DAC_FIR_Type > C_DAC_FIR_Type3)
					DAC_FIR_Type = C_DAC_FIR_Type0;
				SACM_A1600_DA_FIRType(DAC_FIR_Type);	// change DAC filter type
				break;

			case 0x0080:	// IOA7 + Vcc
				PlayCon = 1;
				SpeechIndex = 0;
				USER_A1600_SetStartAddr(SpeechIndex);
				SACM_A1600_Play(Manual_Mode_Index, DAC1 + DAC2, Ramp_Up);
				break;

			default:
				break;
		} // end of switch
		if(PlayCon)
		{
			if(SACM_A1600_Check_Con() == -1)
			{
				if(++SpeechIndex >= MaxSpeechNum)		// next speech
					SpeechIndex = 0;
				USER_A1600_SetStartAddr_Con(SpeechIndex);
				SACM_A1600_Play_Con(Manual_Mode_Index, DAC1 + DAC2, Ramp_Dn);
			}
		}
		if(ServiceType == Foreground)
			SACM_A1600_ServiceLoop();
		System_ServiceLoop();
	} // end of while
}

