cc = gcc
cflags = -ansi -pedantic -Wall -m64
optflags = -O1

et: et.o 
	$(cc) $(cflags) $(optflags) et.o -o et

et.o: et.c
	$(cc) $(cflags) $(optflags) -c et.c

clean:
	rm -f *.o

