#	Copyright (c) 1984 AT&T
#	  All Rights Reserved

#	THIS IS UNPUBLISHED PROPRIETARY SOURCE CODE OF AT&T
#	The copyright notice above does not evidence any
#	actual or intended publication of such source code.

#ident	"@(#)clri:clri.mk	1.1"

#	Makefile for clri

ROOT =

DIR = $(ROOT)/etc

INC = $(ROOT)/usr/include

LDFLAGS = -s $(LDLIBS)

CFLAGS = -O -I$(INC)

STRIP = strip

SIZE = size

#top#
# Generated by makefile 1.47

MAKEFILE = clri.mk


MAINS = clri clri1b clri16b

OBJECTS =  clri.o

SOURCES =  clri.c

ALL:		$(MAINS)

clri:		clri.o 
	$(CC) $(CFLAGS)  -o clri  clri.o   $(LDFLAGS)

clri1b:	
	$(CC) $(CFLAGS)  -DFsTYPE=1 -o clri1b  clri.c   $(LDFLAGS)

clri16b:
	$(CC) $(CFLAGS)  -DFsTYPE=5 -o clri16b  clri.c   $(LDFLAGS)

clri.o:		 $(INC)/sys/param.h $(INC)/sys/types.h \
		 $(INC)/sys/ino.h	$(INC)/sys/filsys.h 

GLOBALINCS = $(INC)/sys/filsys.h $(INC)/sys/ino.h \
	$(INC)/sys/param.h $(INC)/sys/types.h 


clean:
	rm -f $(OBJECTS)

clobber:
	rm -f $(OBJECTS) $(MAINS)

newmakefile:
	makefile -m -f $(MAKEFILE)  -s INC $(INC)
#bottom#

all : ALL

install: ALL
	/bin/ls $(MAINS) | xargs -n1 -i cpset {} $(DIR)

size: ALL
	$(SIZE) $(MAINS)

strip: ALL
	$(STRIP) $(MAINS)

#	These targets are useful but optional

partslist:
	@echo $(MAKEFILE) $(SOURCES) $(LOCALINCS)  |  tr ' ' '\012'  |  sort

productdir:
	@echo $(DIR) | tr ' ' '\012' | sort

product:
	@echo $(MAINS)  |  tr ' ' '\012'  | \
	sed 's;^;$(DIR)/;'

srcaudit:
	@fileaudit $(MAKEFILE) $(LOCALINCS) $(SOURCES) -o $(OBJECTS) $(MAINS)
