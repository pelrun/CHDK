#0x3184
PLATFORMID=12676

PLATFORMOS=dryos

MEMBASEADDR=0x1900
RESTARTSTART=0x60000

MEMISOSTART= 0xbff60

ROMBASEADDR=0xff810000


PLFLAGS=-DMEMBASEADDR=$(MEMBASEADDR) -DMEMISOSTART=$(MEMISOSTART) -DMEMISOSIZE=$(MEMISOSIZE)
PLFLAGS+=-DRESTARTSTART=$(RESTARTSTART)

NEED_ENCODED_DISKBOOT=1
KEYSYS=d3enc

PLATFORMOSVER=23
