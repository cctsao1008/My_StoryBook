// FreeRTOS include files 
#include "..\..\FreeRTOS\source\include\FreeRTOS.h" 
#include "..\..\FreeRTOS\source\include\task.h" 
#include "..\..\FreeRTOS\source\include\croutine.h"  
#include "..\..\FreeRTOS\source\include\semphr.h"

// GPCE063A
#include    "..\..\BSP\include\GPCE063.h"


#define heap_size  400

void Reset_Watchdog(void);
int BSP_INIT(void);
void vToggleLED(void);

void Task_01(void *pvParameters);
void Task_02(void *pvParameters);


long count = 0;
portTickType xTick = 0; 
portSTACK_TYPE stack[heap_size];

int main()
{
	unsigned int arg = 1000;

    #if 0
    count = sizeof(portSTACK_TYPE)*heap_size;
    count = sizeof(size_t); // 1 word
    count = sizeof(char); // 1 word
    count = sizeof(unsigned char); // 1 word
    count = sizeof(int); // 1 word
    count = sizeof(unsigned int); // 1 word
    count = sizeof(long); // 2 word
    count = sizeof(unsigned long); // 2 word
    count = sizeof(float); // 2 word
    count = sizeof(short); // 1 word
    count = sizeof(unsigned short); // 1 word
    #endif

    BSP_INIT();
    
    init_heap((size_t)stack,sizeof(portSTACK_TYPE)*heap_size);
    
    xTaskCreate(Task_01, (signed portCHAR *)"Task_01", configMINIMAL_STACK_SIZE, (void*)&arg, 3, NULL );
    xTaskCreate(Task_02, (signed portCHAR *)"Task_02", configMINIMAL_STACK_SIZE, (void*)&arg, 6, NULL ); 
    
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
    	xTick = xTaskGetTickCount();
    	vTaskDelay( 3 );
    	xTick = xTaskGetTickCount();
        count++;
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
    
    // Config Interrupt
    #if 0
    P_Int_Ctrl = C_IRQ7_64Hz;
    #endif
    
    //asm("INT FIQ,IRQ");
    return 0;
}

void vToggleLED(void)
{
	P_IOB_Data->data = ~(P_IOB_Data->data);
}
