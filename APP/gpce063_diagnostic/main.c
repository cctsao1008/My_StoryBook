// FreeRTOS include files 
#include "..\..\FreeRTOS\source\include\FreeRTOS.h" 
#include "..\..\FreeRTOS\source\include\task.h" 
#include "..\..\FreeRTOS\source\include\croutine.h"  
#include "..\..\FreeRTOS\source\include\semphr.h"

// GPCE063A
#include    "..\..\BSP\include\GPCE063.h"


#define heap_size  150

void Reset_Watchdog(void);
int BSP_INIT(void);

void test_func(void *pvParameters);

long count = 0;
portSTACK_TYPE stack[heap_size];

int main()
{
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
    
    xTaskCreate(test_func, (signed portCHAR *)"test_func", configMINIMAL_STACK_SIZE, NULL, 10, NULL ); 
    
    // RunSchedular    
    vTaskStartScheduler();     
    
    // RunSchedular fail!!
    while(1)
    {
        count++;    
    }
    
    return 0;
}

void test_func(void *pvParameters)
{
    while(1)
    {
        count++;
        
        vTaskDelay( 100 );
    }
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
    P_Int_Ctrl = C_IRQ7_64Hz;
    
    asm("INT FIQ,IRQ");
    return 0;
}

