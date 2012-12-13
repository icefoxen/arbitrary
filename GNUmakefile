CC=gcc
CFLAGS=-O0 -Wall -lm -std=c99

#OBJ=arbInt.o arbLong.o arbFloat.o arbDouble.o arbCacheAbuse.o arbCacheCoherant.o \
#arbCacheLienar.o
#OUTPUT=arbInt.exe arbLong.exe arbFloat.exe arbDouble.exe

#all: $(OUTPUT)


.PHONY: clean nuke

clean:
	rm -f *.o
	rm -f *~

nuke: clean
	rm -f *.exe

%.exe: %.o
	$(CC) $(CFLAGS) -o $*.exe $<

%.o: %.c
	$(CC) $(CFLAGS) -c $<

