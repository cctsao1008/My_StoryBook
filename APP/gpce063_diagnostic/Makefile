#####################################################################
#																	 
#	Created by u'nSP IDE		13:40:32	05/18/13
#
#####################################################################




APPDIR	= C:\GENERA~1\UNSPID~1.5

OUTDIR	= .\Debug

CC	= $(APPDIR)\toolchain\gcc

AS	= $(APPDIR)\toolchain\xasm16

LD	= $(APPDIR)\toolchain\xlink16

AR	= $(APPDIR)\toolchain\xlib16

RESC	= $(APPDIR)\toolchain\resc

RM	= $(APPDIR)\toolchain\rm -f

INCLUDES	= -I"D:/RC_CODE/git_gpce063a_freertos/APP/gpce063_diagnostic" -I"C:/Generalplus/unSPIDE 3.0.5/library/include" -I"C:/Generalplus/unSPIDE 3.0.5/library/include/sys"

BODY	= -body GPCE063A_064A -nobdy -bfile "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\gpce063_diagnostic.bdy"

BODYFILE	= "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\gpce063_diagnostic.bdy" 

BINFILE	= "$(OUTDIR)\gpce063_diagnostic.S37"

ARYFILE	= "$(OUTDIR)\gpce063_diagnostic.ary"

SBMFILE	= "$(OUTDIR)\gpce063_diagnostic.sbm"

OPT	= -S -gstabs -Wall -mglobal-var-iram

ASFLAGS	= -t5 -d -sr

CASFLAGS	= -t5 -sr -wpop

CFLAGS	= $(OPT) -B$(APPDIR)\toolchain\ $(INCLUDES) 

BINTYPE	= -as

LDFLAGS	=  -infblk "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\gpce063_diagnostic.inb"

EXTRAFLAGS	= 


OBJFILES	= \
	"$(OUTDIR)\squeeze_toy_8khz_a16.res" \
	"$(OUTDIR)\Resource.obj" \
	"$(OUTDIR)\croutine.obj" \
	"$(OUTDIR)\list.obj" \
	"$(OUTDIR)\queue.obj" \
	"$(OUTDIR)\tasks.obj" \
	"$(OUTDIR)\timers.obj" \
	"$(OUTDIR)\port_c.obj" \
	"$(OUTDIR)\port_a.obj" \
	"$(OUTDIR)\heap_3.obj" \
	"$(OUTDIR)\main.obj" \
	"$(OUTDIR)\System.obj" \
	"$(OUTDIR)\SACM_A1600_User.obj" \
	"$(OUTDIR)\Isr_a.obj" \
	"$(OUTDIR)\isr_c.obj" \
	"$(OUTDIR)\debug_led.obj" \
	"$(OUTDIR)\ParTest.obj" \
	"$(OUTDIR)\diskio.obj" \
	"$(OUTDIR)\pff.obj" 

"$(OUTDIR)\squeeze_toy_8khz_a16.res": "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\voice\squeeze_toy_8khz.a16"
	$(RESC) "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\voice\squeeze_toy_8khz.a16" "$(OUTDIR)\squeeze_toy_8khz_a16.res" RES_SQUEEZE_TOY_8KHZ_A16 

"$(OUTDIR)\Resource.obj": "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\Resource.asm" 
	$(AS) $(ASFLAGS) $(INCLUDES) -o "$(OUTDIR)\Resource.obj" "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\Resource.asm" 

"$(OUTDIR)\croutine.asm": "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\croutine.c" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\FreeRTOS.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\task.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\croutine.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\projdefs.h" "D:\RC_CODE\git_gpce063a_freertos\APP\include\FreeRTOSConfig.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\portable.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\list.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\portmacro.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\mpu_wrappers.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\memory.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\limits.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/croutine.asm" "D:/RC_CODE/git_gpce063a_freertos/FreeRTOS/source/croutine.c" 

"$(OUTDIR)\croutine.obj": "$(OUTDIR)\croutine.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\croutine.obj" "$(OUTDIR)\croutine.asm" 

"$(OUTDIR)\list.asm": "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\list.c" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\FreeRTOS.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\list.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\projdefs.h" "D:\RC_CODE\git_gpce063a_freertos\APP\include\FreeRTOSConfig.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\portable.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\portmacro.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\mpu_wrappers.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\limits.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\memory.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/list.asm" "D:/RC_CODE/git_gpce063a_freertos/FreeRTOS/source/list.c" 

"$(OUTDIR)\list.obj": "$(OUTDIR)\list.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\list.obj" "$(OUTDIR)\list.asm" 

"$(OUTDIR)\queue.asm": "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\queue.c" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\FreeRTOS.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\task.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\queue.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\croutine.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\projdefs.h" "D:\RC_CODE\git_gpce063a_freertos\APP\include\FreeRTOSConfig.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\portable.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\list.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\mpu_wrappers.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\portmacro.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\limits.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\memory.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/queue.asm" "D:/RC_CODE/git_gpce063a_freertos/FreeRTOS/source/queue.c" 

"$(OUTDIR)\queue.obj": "$(OUTDIR)\queue.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\queue.obj" "$(OUTDIR)\queue.asm" 

"$(OUTDIR)\tasks.asm": "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\tasks.c" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\FreeRTOS.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\task.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\timers.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\StackMacros.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\projdefs.h" "D:\RC_CODE\git_gpce063a_freertos\APP\include\FreeRTOSConfig.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\portable.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\list.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\portmacro.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\mpu_wrappers.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdio.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdarg.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\limits.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\memory.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/tasks.asm" "D:/RC_CODE/git_gpce063a_freertos/FreeRTOS/source/tasks.c" 

"$(OUTDIR)\tasks.obj": "$(OUTDIR)\tasks.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\tasks.obj" "$(OUTDIR)\tasks.asm" 

"$(OUTDIR)\timers.asm": "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\timers.c" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\FreeRTOS.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\task.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\queue.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\timers.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\projdefs.h" "D:\RC_CODE\git_gpce063a_freertos\APP\include\FreeRTOSConfig.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\portable.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\list.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\mpu_wrappers.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\portmacro.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\memory.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\limits.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/timers.asm" "D:/RC_CODE/git_gpce063a_freertos/FreeRTOS/source/timers.c" 

"$(OUTDIR)\timers.obj": "$(OUTDIR)\timers.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\timers.obj" "$(OUTDIR)\timers.asm" 

"$(OUTDIR)\port_c.asm": "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\port_c.c" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\FreeRTOS.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\task.h" "D:\RC_CODE\git_gpce063a_freertos\BSP\include\GPCE063.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\projdefs.h" "D:\RC_CODE\git_gpce063a_freertos\APP\include\FreeRTOSConfig.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\portable.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\list.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\portmacro.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\mpu_wrappers.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\memory.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\limits.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/port_c.asm" "D:/RC_CODE/git_gpce063a_freertos/FreeRTOS/source/portable/GCC/unsp_isa_v13/port_c.c" 

"$(OUTDIR)\port_c.obj": "$(OUTDIR)\port_c.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\port_c.obj" "$(OUTDIR)\port_c.asm" 

"$(OUTDIR)\port_a.obj": "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\port_a.asm" "D:\RC_CODE\git_gpce063a_freertos\BSP\include\GPCE063.inc" 
	$(AS) $(ASFLAGS) $(INCLUDES) -o "$(OUTDIR)\port_a.obj" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\port_a.asm" 

"$(OUTDIR)\heap_3.asm": "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\MemMang\heap_3.c" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\FreeRTOS.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\task.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\projdefs.h" "D:\RC_CODE\git_gpce063a_freertos\APP\include\FreeRTOSConfig.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\portable.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\list.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\portmacro.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\mpu_wrappers.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\limits.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\memory.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/heap_3.asm" "D:/RC_CODE/git_gpce063a_freertos/FreeRTOS/source/portable/MemMang/heap_3.c" 

"$(OUTDIR)\heap_3.obj": "$(OUTDIR)\heap_3.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\heap_3.obj" "$(OUTDIR)\heap_3.asm" 

"$(OUTDIR)\main.asm": "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\main.c" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\FreeRTOS.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\task.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\croutine.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\semphr.h" "D:\RC_CODE\git_gpce063a_freertos\BSP\include\GPCE063.h" ".\SACM.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\projdefs.h" "D:\RC_CODE\git_gpce063a_freertos\APP\include\FreeRTOSConfig.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\portable.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\list.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\queue.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\portmacro.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\mpu_wrappers.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\memory.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\limits.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/main.asm" "D:/RC_CODE/git_gpce063a_freertos/APP/gpce063_diagnostic/main.c" 

"$(OUTDIR)\main.obj": "$(OUTDIR)\main.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\main.obj" "$(OUTDIR)\main.asm" 

"$(OUTDIR)\System.obj": "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\System.asm" 
	$(AS) $(ASFLAGS) $(INCLUDES) -o "$(OUTDIR)\System.obj" "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\System.asm" 

"$(OUTDIR)\SACM_A1600_User.obj": "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\SACM_A1600_User.asm" 
	$(AS) $(ASFLAGS) $(INCLUDES) -o "$(OUTDIR)\SACM_A1600_User.obj" "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\SACM_A1600_User.asm" 

"$(OUTDIR)\Isr_a.obj": "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\Isr_a.asm" 
	$(AS) $(ASFLAGS) $(INCLUDES) -o "$(OUTDIR)\Isr_a.obj" "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\Isr_a.asm" 

"$(OUTDIR)\isr_c.asm": "D:\RC_CODE\git_gpce063a_freertos\APP\gpce063_diagnostic\isr_c.c" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/isr_c.asm" "D:/RC_CODE/git_gpce063a_freertos/APP/gpce063_diagnostic/isr_c.c" 

"$(OUTDIR)\isr_c.obj": "$(OUTDIR)\isr_c.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\isr_c.obj" "$(OUTDIR)\isr_c.asm" 

"$(OUTDIR)\debug_led.asm": "D:\RC_CODE\git_gpce063a_freertos\APP\debug_led\debug_led.c" "D:\RC_CODE\git_gpce063a_freertos\APP\debug_led\debug_led.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/debug_led.asm" "D:/RC_CODE/git_gpce063a_freertos/APP/debug_led/debug_led.c" 

"$(OUTDIR)\debug_led.obj": "$(OUTDIR)\debug_led.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\debug_led.obj" "$(OUTDIR)\debug_led.asm" 

"$(OUTDIR)\ParTest.asm": "D:\RC_CODE\git_gpce063a_freertos\APP\ParTest\ParTest.c" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\FreeRTOS.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\task.h" "D:\RC_CODE\git_gpce063a_freertos\APP\ParTest\partest.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\projdefs.h" "D:\RC_CODE\git_gpce063a_freertos\APP\include\FreeRTOSConfig.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\portable.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\list.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\portable\GCC\unsp_isa_v13\portmacro.h" "D:\RC_CODE\git_gpce063a_freertos\FreeRTOS\source\include\mpu_wrappers.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\memory.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Generalplus\unSPIDE 3.0.5\library\include\limits.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/ParTest.asm" "D:/RC_CODE/git_gpce063a_freertos/APP/ParTest/ParTest.c" 

"$(OUTDIR)\ParTest.obj": "$(OUTDIR)\ParTest.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\ParTest.obj" "$(OUTDIR)\ParTest.asm" 

"$(OUTDIR)\diskio.asm": "D:\RC_CODE\git_gpce063a_freertos\APP\pff\src\diskio.c" "D:\RC_CODE\git_gpce063a_freertos\APP\pff\src\diskio.h" "D:\RC_CODE\git_gpce063a_freertos\APP\pff\src\integer.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/diskio.asm" "D:/RC_CODE/git_gpce063a_freertos/APP/pff/src/diskio.c" 

"$(OUTDIR)\diskio.obj": "$(OUTDIR)\diskio.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\diskio.obj" "$(OUTDIR)\diskio.asm" 

"$(OUTDIR)\pff.asm": "D:\RC_CODE\git_gpce063a_freertos\APP\pff\src\pff.c" "D:\RC_CODE\git_gpce063a_freertos\APP\pff\src\pff.h" "D:\RC_CODE\git_gpce063a_freertos\APP\pff\src\diskio.h" "D:\RC_CODE\git_gpce063a_freertos\APP\pff\src\integer.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/pff.asm" "D:/RC_CODE/git_gpce063a_freertos/APP/pff/src/pff.c" 

"$(OUTDIR)\pff.obj": "$(OUTDIR)\pff.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\pff.obj" "$(OUTDIR)\pff.asm" 


.SUFFIXES : .c .asm .obj .s37 .tsk .res

all :	 BEFOREBUILD "$(OUTDIR)" $(BINFILE)

BEFOREBUILD :

"$(OUTDIR)" :
	if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

$(BINFILE) : $(OBJFILES) 
	$(LD) $(BINTYPE) $(ARYFILE) $(BINFILE) $(LDFLAGS) $(BODY) $(EXTRAFLAGS)

compile :	 $(OBJFILES)

clean :
	$(RM) "$(OUTDIR)\squeeze_toy_8khz_a16.res" 
	$(RM) "$(OUTDIR)\Resource.obj" 
	$(RM) "$(OUTDIR)\Resource.lst" 
	$(RM) "$(OUTDIR)\croutine.obj" 
	$(RM) "$(OUTDIR)\croutine.lst" 
	$(RM) "$(OUTDIR)\croutine.asm" 
	$(RM) "$(OUTDIR)\list.obj" 
	$(RM) "$(OUTDIR)\list.lst" 
	$(RM) "$(OUTDIR)\list.asm" 
	$(RM) "$(OUTDIR)\queue.obj" 
	$(RM) "$(OUTDIR)\queue.lst" 
	$(RM) "$(OUTDIR)\queue.asm" 
	$(RM) "$(OUTDIR)\tasks.obj" 
	$(RM) "$(OUTDIR)\tasks.lst" 
	$(RM) "$(OUTDIR)\tasks.asm" 
	$(RM) "$(OUTDIR)\timers.obj" 
	$(RM) "$(OUTDIR)\timers.lst" 
	$(RM) "$(OUTDIR)\timers.asm" 
	$(RM) "$(OUTDIR)\port_c.obj" 
	$(RM) "$(OUTDIR)\port_c.lst" 
	$(RM) "$(OUTDIR)\port_c.asm" 
	$(RM) "$(OUTDIR)\port_a.obj" 
	$(RM) "$(OUTDIR)\port_a.lst" 
	$(RM) "$(OUTDIR)\heap_3.obj" 
	$(RM) "$(OUTDIR)\heap_3.lst" 
	$(RM) "$(OUTDIR)\heap_3.asm" 
	$(RM) "$(OUTDIR)\main.obj" 
	$(RM) "$(OUTDIR)\main.lst" 
	$(RM) "$(OUTDIR)\main.asm" 
	$(RM) "$(OUTDIR)\System.obj" 
	$(RM) "$(OUTDIR)\System.lst" 
	$(RM) "$(OUTDIR)\SACM_A1600_User.obj" 
	$(RM) "$(OUTDIR)\SACM_A1600_User.lst" 
	$(RM) "$(OUTDIR)\Isr_a.obj" 
	$(RM) "$(OUTDIR)\Isr_a.lst" 
	$(RM) "$(OUTDIR)\isr_c.obj" 
	$(RM) "$(OUTDIR)\isr_c.lst" 
	$(RM) "$(OUTDIR)\isr_c.asm" 
	$(RM) "$(OUTDIR)\debug_led.obj" 
	$(RM) "$(OUTDIR)\debug_led.lst" 
	$(RM) "$(OUTDIR)\debug_led.asm" 
	$(RM) "$(OUTDIR)\ParTest.obj" 
	$(RM) "$(OUTDIR)\ParTest.lst" 
	$(RM) "$(OUTDIR)\ParTest.asm" 
	$(RM) "$(OUTDIR)\diskio.obj" 
	$(RM) "$(OUTDIR)\diskio.lst" 
	$(RM) "$(OUTDIR)\diskio.asm" 
	$(RM) "$(OUTDIR)\pff.obj" 
	$(RM) "$(OUTDIR)\pff.lst" 
	$(RM) "$(OUTDIR)\pff.asm" 
	$(RM) $(BINFILE) $(SBMFILE) 

.c.asm:
	$(CC) $(CFLAGS) $(INCLUDES) -o "$(OUTDIR)/$@" $<

.asm.obj:
	$(AS) $(ASFLAGS) $(INCLUDES) -o "$(OUTDIR)/$@" $<

