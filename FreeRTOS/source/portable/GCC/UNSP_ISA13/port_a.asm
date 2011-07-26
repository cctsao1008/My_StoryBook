.include    ..\..\..\..\..\BSP\include\GPCE063.inc

.IFDEF      _ASM_PORT
.PUBLIC     _vPortStartFirstTask
.ENDIF

.IFDEF      _ASM_PORT
.PUBLIC     _vPortYield
.ENDIF

.PUBLIC     _xPortReadFlagRegister
.PUBLIC     _portSAVE_CONTEXT
.PUBLIC     _portRESTORE_CONTEXT

.IFDEF      _ASM_PORT
.PUBLIC     _IRQ7
.PUBLIC     _FIQ
.PUBLIC     _BREAK
.ENDIF

.EXTERNAL   _pxCurrentTCB
.EXTERNAL   _vTaskSwitchContext
.EXTERNAL   _vTaskIncrementTick



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
    PUSH R1 TO [SP]
    SECBANK OFF
    
    .ENDM

POPFR: .MACRO

    SECBANK ON
    POP R1 FROM [SP]
    R2 = 0x1FFF
    R1 = R1 & R2
    FR = R1
    SECBANK OFF
    
    .ENDM



.CODE

.IFDEF      _ASM_PORT
_vPortStartFirstTask: .PROC

    R1 = [_pxCurrentTCB]
    SP = [R1]

    POPALL

    RETI

.ENDP
.ENDIF

.IFDEF      _ASM_PORT
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
.ENDIF

_xPortReadFlagRegister: .PROC

    R1 = FR
    R2 = 0x1FFF
    R1 = R1 & R2

    RETF

.ENDP

_portSAVE_CONTEXT: .PROC

    PUSHFR

    PUSHALL

    R1 = [_pxCurrentTCB]
    [R1] = SP

.ENDP

_portRESTORE_CONTEXT: .PROC

    R1 = [_pxCurrentTCB]
    SP = [R1]

    POPALL

    RETI

.ENDP




.TEXT

.IFDEF      _ASM_PORT
_IRQ7:
    
    PUSHALL

    R1 = C_IRQ7_64Hz
    [P_INT_Status] = R1

    R1 = C_Watchdog_Clear
    [P_Watchdog_Clear] = R1
    
    CALL _vTaskIncrementTick
    CALL _vPortYield
    
    POPALL

    RETI

_FIQ:

    RETI

_BREAK:

    RETI
.ENDIF
