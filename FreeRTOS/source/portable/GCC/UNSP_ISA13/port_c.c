/*
    FreeRTOS V7.0.1 - Copyright (C) 2011 Real Time Engineers Ltd.


    ***************************************************************************
     *                                                                       *
     *    FreeRTOS tutorial books are available in pdf and paperback.        *
     *    Complete, revised, and edited pdf reference manuals are also       *
     *    available.                                                         *
     *                                                                       *
     *    Purchasing FreeRTOS documentation will not only help you, by       *
     *    ensuring you get running as quickly as possible and with an        *
     *    in-depth knowledge of how to use FreeRTOS, it will also help       *
     *    the FreeRTOS project to continue with its mission of providing     *
     *    professional grade, cross platform, de facto standard solutions    *
     *    for microcontrollers - completely free of charge!                  *
     *                                                                       *
     *    >>> See http://www.FreeRTOS.org/Documentation for details. <<<     *
     *                                                                       *
     *    Thank you for using FreeRTOS, and thank you for your support!      *
     *                                                                       *
    ***************************************************************************


    This file is part of the FreeRTOS distribution.

    FreeRTOS is free software; you can redistribute it and/or modify it under
    the terms of the GNU General Public License (version 2) as published by the
    Free Software Foundation AND MODIFIED BY the FreeRTOS exception.
    >>>NOTE<<< The modification to the GPL is included to allow you to
    distribute a combined work that includes FreeRTOS without being obliged to
    provide the source code for proprietary components outside of the FreeRTOS
    kernel.  FreeRTOS is distributed in the hope that it will be useful, but
    WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
    or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
    more details. You should have received a copy of the GNU General Public
    License and the FreeRTOS license exception along with FreeRTOS; if not it
    can be viewed here: http://www.freertos.org/a00114.html and also obtained
    by writing to Richard Barry, contact details for whom are available on the
    FreeRTOS WEB site.

    1 tab == 4 spaces!

    http://www.FreeRTOS.org - Documentation, latest information, license and
    contact details.

    http://www.SafeRTOS.com - A version that is certified for use in safety
    critical systems.

    http://www.OpenRTOS.com - Commercial support, development, porting,
    licensing and training services.
*/

/*-----------------------------------------------------------
 * Implementation of functions defined in portable.h for the Cygnal port.
 *----------------------------------------------------------*/

/* Standard includes. */


/* Scheduler includes. */
#include "..\..\..\include\FreeRTOS.h"
#include "..\..\..\include\task.h"

// GPCE063A
#include    "..\..\..\..\..\BSP\include\GPCE063.h"


#define portCLEAR_INTERRUPT_FLAG()

/* Each task maintains its own interrupt status in the critical nesting variable. */
static unsigned portBASE_TYPE uxCriticalNesting = 0;

/*
 * Setup the hardware to generate an interrupt off timer 2 at the required
 * frequency.
 */
static void prvSetupTimerInterrupt( void );

/*
 * Start first task is a separate function so it can be tested in isolation.
 */
extern void vPortStartFirstTask( void );

/*
 * See header file for description.
 */
portSTACK_TYPE *pxPortInitialiseStack( portSTACK_TYPE *pxTopOfStack, pdTASK_CODE pxCode, void *pvParameters )
{
    //portSTACK_TYPE *stk = pxTopOfStack;
    //unsigned int *ptask = (unsigned int*)pxCode;

    /*Simulate task be interrupt status. */
    *pxTopOfStack-- = (portSTACK_TYPE)pvParameters;           /* push pvParameters */
    *pxTopOfStack-- = (portSTACK_TYPE)0x0000;                 /* push PC to SP */
    *pxTopOfStack-- = (portSTACK_TYPE)0x0000;                 /* push SR to SP */

    *pxTopOfStack-- = *((portSTACK_TYPE*)(pxCode+1));         /* Push PC to SP */
    *pxTopOfStack-- = *((portSTACK_TYPE*)(pxCode+0));         /* push SR to SP */

    *pxTopOfStack-- = (portSTACK_TYPE)0x0008;                 /* push FR to SP */

    *pxTopOfStack-- = (portSTACK_TYPE)0x5555;                 /* push R5 to sp */
    *pxTopOfStack-- = (portSTACK_TYPE)0x4444;                 /* push R4 to sp */
    *pxTopOfStack-- = (portSTACK_TYPE)0x3333;                 /* push R3 to sp */
    *pxTopOfStack-- = (portSTACK_TYPE)0x2222;                 /* push R2 to sp */
    *pxTopOfStack-- = (portSTACK_TYPE)0x1111;                 /* push R1 to sp */

    return pxTopOfStack;
}

/*
 * See header file for description.
 */
portBASE_TYPE xPortStartScheduler( void )
{
    /* Start the timer that generates the tick ISR.  Interrupts are disabled
    here already. */
    prvSetupTimerInterrupt();

    /* Initialise the critical nesting count ready for the first task. */
    uxCriticalNesting = 0;

    /* Start the first task. */
    vPortStartFirstTask();

    /* Should not get here! */
    return pdTRUE;
}

void vPortEndScheduler( void )
{
    /* Not implemented for this port. */
    P_Watchdog_Clear = C_Watchdog_Clear;
}

static void prvSetupTimerInterrupt( void )
{
    P_Watchdog_Clear = C_Watchdog_Clear;
}

void vApplicationIdleHook( void )
{
    P_Watchdog_Clear = C_Watchdog_Clear;
}

void vApplicationTickHook( void )
{
    P_Watchdog_Clear = C_Watchdog_Clear;
}


