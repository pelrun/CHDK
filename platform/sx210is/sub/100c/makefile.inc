#PLATFORMID=0x31F6
PLATFORMID=12790

PLATFORMOS=dryos

MEMBASEADDR=0x1900
RESTARTSTART=0x50000
MEMISOSTART=0x152728
ROMBASEADDR=0xFF810000


PLFLAGS=-DMEMBASEADDR=$(MEMBASEADDR) -DMEMISOSTART=$(MEMISOSTART) -DMEMISOSIZE=$(MEMISOSIZE)
PLFLAGS+=-DRESTARTSTART=$(RESTARTSTART)

NEED_ENCODED_DISKBOOT=4
KEYSYS=d4a

