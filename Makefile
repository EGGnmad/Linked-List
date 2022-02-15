CC=gcc
CFLAGS=-Wall -o
OBJS=$(wildcard *.c)

LL.o : LL.c
	$(CC) -c $(CFLAGS) LL.o LL.c

clean:
	rm -f $(OBJS:.c=.o)
	rm -f $(TARGET)