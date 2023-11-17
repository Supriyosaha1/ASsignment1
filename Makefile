# Makefile for Windows CMD

CC = gcc
CFLAGS = -Wall -Wextra -std=c99
OBJS = main.o stats.o

main.exe: $(OBJS)
	$(CC) $(CFLAGS) -o main.exe $(OBJS)

main.o: main.c stats.h
	$(CC) $(CFLAGS) -c main.c

stats.o: stats.c stats.h
	$(CC) $(CFLAGS) -c stats.c

clean:
	del main.exe $(OBJS)
