//FreeRTOS include files 
#include "../../FreeRTOS/source/include/FreeRTOS.h" 
#include "../../FreeRTOS/source/include/task.h" 
#include "../../FreeRTOS/source/include/croutine.h"  
#include "../../FreeRTOS/source/include/semphr.h"

#define heap_size  150
void test_func(void *pvParameters);

long count = 0;
portSTACK_TYPE stack[heap_size];

int main()
{
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
