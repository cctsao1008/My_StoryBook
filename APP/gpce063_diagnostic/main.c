//FreeRTOS include files 
#include "../../FreeRTOS/source/include/FreeRTOS.h" 
#include "../../FreeRTOS/source/include/task.h" 
#include "../../FreeRTOS/source/include/croutine.h"  
#include "../../FreeRTOS/source/include/semphr.h"

void test_func(void);

long count = 0;
int main()
{
	xTaskCreate(test_func, (signed portCHAR *)"test_func", configMINIMAL_STACK_SIZE, NULL, 10, NULL ); 
	
	//RunSchedular    
	vTaskStartScheduler();     

	return 0;
}

void test_func(void)
{
	while(count < 100)
	{
	    count++;	
	}
}
