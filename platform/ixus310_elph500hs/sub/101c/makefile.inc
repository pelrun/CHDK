#PLATFORMID=0x3225
PLATFORMID=12837

PLATFORMOS=dryos

# Force EXMEM on for ixus310_elph500hs - not enough heap to work in low memory
override OPT_EXMEM_MALLOC=1
override OPT_CHDK_IN_EXMEM=1

ROMBASEADDR=0xFF000000
MAXRAMADDR=0x07FFFFFF

MEMBASEADDR=0x1900
RESTARTSTART=0x50000

# Set up size variables for EXMEM
EXMEM_HEAP_SKIP=0x679800	#(0x48000000-0x47986800) from sub_FF082ACC = size of video buffers in EXMEM area
EXMEM_BUFFER_SIZE=0xC0000	# Amount of EXMEM memory to allocate for CHDK = 768K

ifdef OPT_CHDK_IN_EXMEM
#MEMISOSTART=0x79067E0		# MAXRAMADDR+1 - EXMEM_HEAP_SKIP - EXMEM_BUFFER_SIZE - 32 (exmem allocates 64 bytes extra, 32 before and 32 after block allocated)
MEMISOSTART=0x78C67E0		# 768K
else
MEMISOSTART=0x18B834
endif

PLFLAGS=-DMEMBASEADDR=$(MEMBASEADDR) -DMEMISOSTART=$(MEMISOSTART) -DMEMISOSIZE=$(MEMISOSIZE)
PLFLAGS+=-DRESTARTSTART=$(RESTARTSTART)

NEED_ENCODED_DISKBOOT=6

KEYSYS=d4c

PLATFORMOSVER=47
