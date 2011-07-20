#####################################################################
#																	 
#	Created by u'nSP IDE		20:21:56	07/20/11
#
#####################################################################




APPDIR	= C:\PROGRA~1\GENERA~1\UNSPID~1.5

OUTDIR	= .\Debug

CC	= $(APPDIR)\toolchain\gcc

AS	= $(APPDIR)\toolchain\xasm16

LD	= $(APPDIR)\toolchain\xlink16

AR	= $(APPDIR)\toolchain\xlib16

RESC	= $(APPDIR)\toolchain\resc

RM	= $(APPDIR)\toolchain\rm -f

INCLUDES	= -I"C:/sample_code/My-Story-Book/APP/gpce063_diagnostic" -I"C:/Program Files/Generalplus/unSPIDE 3.0.5/library/include" -I"C:/Program Files/Generalplus/unSPIDE 3.0.5/library/include/sys"

BODY	= -body GPCE063A_064A -nobdy -bfile "C:\sample_code\My-Story-Book\APP\gpce063_diagnostic\gpce063_diagnostic.bdy"

BODYFILE	= "C:\sample_code\My-Story-Book\APP\gpce063_diagnostic\gpce063_diagnostic.bdy" 

BINFILE	= "$(OUTDIR)\gpce063_diagnostic.S37"

ARYFILE	= "$(OUTDIR)\gpce063_diagnostic.ary"

SBMFILE	= "$(OUTDIR)\gpce063_diagnostic.sbm"

OPT	= -S -gstabs -Wall -mglobal-var-iram

ASFLAGS	= -t5 -d -sr

CASFLAGS	= -t5 -sr -wpop

CFLAGS	= $(OPT) -B$(APPDIR)\toolchain\ $(INCLUDES) 

BINTYPE	= -as

LDFLAGS	=  -infblk "C:\sample_code\My-Story-Book\APP\gpce063_diagnostic\gpce063_diagnostic.inb"

EXTRAFLAGS	= 


OBJFILES	= \
	"$(OUTDIR)\main.obj" \
	"$(OUTDIR)\isr.obj" \
	"$(OUTDIR)\Resource.obj" \
	"$(OUTDIR)\timers.obj" \
	"$(OUTDIR)\croutine.obj" \
	"$(OUTDIR)\list.obj" \
	"$(OUTDIR)\queue.obj" \
	"$(OUTDIR)\tasks.obj" \
	"$(OUTDIR)\port.obj" \
	"$(OUTDIR)\heap_3.obj" 

"$(OUTDIR)\main.asm": "C:\sample_code\My-Story-Book\APP\gpce063_diagnostic\main.c" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOS.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\task.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\croutine.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\semphr.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\projdefs.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOSConfig.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\portable.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\list.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\queue.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\GCC\UNSP_ISA13\portmacro.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\mpu_wrappers.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\string.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/main.asm" "C:/sample_code/My-Story-Book/APP/gpce063_diagnostic/main.c" 

"$(OUTDIR)\main.obj": "$(OUTDIR)\main.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\main.obj" "$(OUTDIR)\main.asm" 

"$(OUTDIR)\isr.asm": "C:\sample_code\My-Story-Book\APP\gpce063_diagnostic\isr.c" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/isr.asm" "C:/sample_code/My-Story-Book/APP/gpce063_diagnostic/isr.c" 

"$(OUTDIR)\isr.obj": "$(OUTDIR)\isr.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\isr.obj" "$(OUTDIR)\isr.asm" 

"$(OUTDIR)\Resource.obj": "C:\sample_code\My-Story-Book\APP\gpce063_diagnostic\Resource.asm" 
	$(AS) $(ASFLAGS) $(INCLUDES) -o "$(OUTDIR)\Resource.obj" "C:\sample_code\My-Story-Book\APP\gpce063_diagnostic\Resource.asm" 

"$(OUTDIR)\timers.asm": "C:\sample_code\My-Story-Book\FreeRTOS\source\timers.c" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOS.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\task.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\queue.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\timers.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\projdefs.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOSConfig.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\portable.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\list.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\mpu_wrappers.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\GCC\UNSP_ISA13\portmacro.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\string.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/timers.asm" "C:/sample_code/My-Story-Book/FreeRTOS/source/timers.c" 

"$(OUTDIR)\timers.obj": "$(OUTDIR)\timers.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\timers.obj" "$(OUTDIR)\timers.asm" 

"$(OUTDIR)\croutine.asm": "C:\sample_code\My-Story-Book\FreeRTOS\source\croutine.c" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOS.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\task.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\croutine.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\projdefs.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOSConfig.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\portable.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\list.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\GCC\UNSP_ISA13\portmacro.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\mpu_wrappers.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\string.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/croutine.asm" "C:/sample_code/My-Story-Book/FreeRTOS/source/croutine.c" 

"$(OUTDIR)\croutine.obj": "$(OUTDIR)\croutine.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\croutine.obj" "$(OUTDIR)\croutine.asm" 

"$(OUTDIR)\list.asm": "C:\sample_code\My-Story-Book\FreeRTOS\source\list.c" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOS.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\list.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\projdefs.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOSConfig.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\portable.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\GCC\UNSP_ISA13\portmacro.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\mpu_wrappers.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\limits.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\string.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/list.asm" "C:/sample_code/My-Story-Book/FreeRTOS/source/list.c" 

"$(OUTDIR)\list.obj": "$(OUTDIR)\list.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\list.obj" "$(OUTDIR)\list.asm" 

"$(OUTDIR)\queue.asm": "C:\sample_code\My-Story-Book\FreeRTOS\source\queue.c" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOS.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\task.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\croutine.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\projdefs.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOSConfig.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\portable.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\list.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\GCC\UNSP_ISA13\portmacro.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\mpu_wrappers.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\limits.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/queue.asm" "C:/sample_code/My-Story-Book/FreeRTOS/source/queue.c" 

"$(OUTDIR)\queue.obj": "$(OUTDIR)\queue.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\queue.obj" "$(OUTDIR)\queue.asm" 

"$(OUTDIR)\tasks.asm": "C:\sample_code\My-Story-Book\FreeRTOS\source\tasks.c" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOS.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\task.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\timers.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\StackMacros.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\projdefs.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOSConfig.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\portable.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\list.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\GCC\UNSP_ISA13\portmacro.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\mpu_wrappers.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stdio.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stdarg.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\limits.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/tasks.asm" "C:/sample_code/My-Story-Book/FreeRTOS/source/tasks.c" 

"$(OUTDIR)\tasks.obj": "$(OUTDIR)\tasks.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\tasks.obj" "$(OUTDIR)\tasks.asm" 

"$(OUTDIR)\port.asm": "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\GCC\UNSP_ISA13\port.c" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOS.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\task.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\projdefs.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOSConfig.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\portable.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\list.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\GCC\UNSP_ISA13\portmacro.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\mpu_wrappers.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\string.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/port.asm" "C:/sample_code/My-Story-Book/FreeRTOS/source/portable/GCC/UNSP_ISA13/port.c" 

"$(OUTDIR)\port.obj": "$(OUTDIR)\port.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\port.obj" "$(OUTDIR)\port.asm" 

"$(OUTDIR)\heap_3.asm": "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\MemMang\heap_3.c" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOS.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\task.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\projdefs.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\FreeRTOSConfig.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\portable.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\list.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\portable\GCC\UNSP_ISA13\portmacro.h" "C:\sample_code\My-Story-Book\FreeRTOS\source\include\mpu_wrappers.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stdlib.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\reent.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\sys\reent.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\_ansi.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\machine/_types.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\assert.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\limits.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\stddef.h" "C:\Program Files\Generalplus\unSPIDE 3.0.5\library\include\string.h" 
	set PATH="$(APPDIR)\toolchain\";%PATH% & \
	$(CC) $(CFLAGS) -o "$(OUTDIR)/heap_3.asm" "C:/sample_code/My-Story-Book/FreeRTOS/source/portable/MemMang/heap_3.c" 

"$(OUTDIR)\heap_3.obj": "$(OUTDIR)\heap_3.asm"
	$(AS) $(CASFLAGS) $(INCLUDES) -o "$(OUTDIR)\heap_3.obj" "$(OUTDIR)\heap_3.asm" 


.SUFFIXES : .c .asm .obj .s37 .tsk .res

all :	 BEFOREBUILD "$(OUTDIR)" $(BINFILE)

BEFOREBUILD :

"$(OUTDIR)" :
	if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

$(BINFILE) : $(OBJFILES) 
	$(LD) $(BINTYPE) $(ARYFILE) $(BINFILE) $(LDFLAGS) $(BODY) $(EXTRAFLAGS)

compile :	 $(OBJFILES)

clean :
	$(RM) "$(OUTDIR)\main.obj" 
	$(RM) "$(OUTDIR)\main.lst" 
	$(RM) "$(OUTDIR)\main.asm" 
	$(RM) "$(OUTDIR)\isr.obj" 
	$(RM) "$(OUTDIR)\isr.lst" 
	$(RM) "$(OUTDIR)\isr.asm" 
	$(RM) "$(OUTDIR)\Resource.obj" 
	$(RM) "$(OUTDIR)\Resource.lst" 
	$(RM) "$(OUTDIR)\timers.obj" 
	$(RM) "$(OUTDIR)\timers.lst" 
	$(RM) "$(OUTDIR)\timers.asm" 
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
	$(RM) "$(OUTDIR)\port.obj" 
	$(RM) "$(OUTDIR)\port.lst" 
	$(RM) "$(OUTDIR)\port.asm" 
	$(RM) "$(OUTDIR)\heap_3.obj" 
	$(RM) "$(OUTDIR)\heap_3.lst" 
	$(RM) "$(OUTDIR)\heap_3.asm" 
	$(RM) $(BINFILE) $(SBMFILE) 

.c.asm:
	$(CC) $(CFLAGS) $(INCLUDES) -o "$(OUTDIR)/$@" $<

.asm.obj:
	$(AS) $(ASFLAGS) $(INCLUDES) -o "$(OUTDIR)/$@" $<

