.include    ..\..\..\..\..\BSP\include\GPCE063.inc

.PUBLIC     _vPortStartFirstTask
.PUBLIC     _vPortYield

.PUBLIC     _IRQ7
.PUBLIC     _FIQ
.PUBLIC     _BREAK

.EXTERNAL   _pxCurrentTCB
.EXTERNAL   _vTaskSwitchContext

PUSHALL: .MACRO
    PUSH R1,R5 TO [SP]
    .ENDM

POPALL: .MACRO
    POP R1,R5 FROM [SP]
    .ENDM

PUSHFR: .MACRO
    SECBANK ON
    R1 = FR
    R2 = 0x1FFF
    R1 = R1 & R2
    PUSH R1 to [SP]
    SECBANK OFF
    .ENDM

.CODE

_vPortStartFirstTask: .PROC

    R1 = [_pxCurrentTCB]
    SP = [R1]

    POPALL

    RETI

.ENDP

_vPortYield: .PROC

    PUSHFR

    PUSHALL

    R1 = [_pxCurrentTCB]
    [R1] = SP

    CALL _vTaskSwitchContext

    R1 = [_pxCurrentTCB]
    SP = [R1]

    POPALL

    RETI

.ENDP

.TEXT

_IRQ7:
//_OSTickISR: .proc

    PUSHALL

    R1 = C_IRQ7_64Hz
    [P_INT_Status] = R1

    R1 = C_Watchdog_Clear
    [P_Watchdog_Clear] = R1

    POPALL

    RETI

//.endp

_FIQ:

    RETI

_BREAK:

    RETI
