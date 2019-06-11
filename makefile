CC=gcc
CFLAGS=-I.

summake: sum.o
	$(CC) -o -nostartfiles summake sum.o