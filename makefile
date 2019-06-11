CC=gcc
CFLAGS=-I.

summake: sum.o
	$(CC) -o summake sum.o -nostartfiles