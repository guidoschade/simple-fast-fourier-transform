CFLAGS = -O2 -Wall
CC = cc -g

OBJECTS = main.o fft.o

all:	$(OBJECTS)
	$(CC) $(CFLAGS) -o main $(OBJECTS) -lm
clean:  
	/bin/rm -f $(OBJECTS) main

main.o:     main.c
fft.o:	    fft.c
