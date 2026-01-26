CC = gcc
CFLAGS = -Wall -I.

.PHONY: all run test clean

# Compilation
all:
	$(CC) $(CFLAGS) main.c utils.c -o cpu_monitor

# Tests
vtest:
	$(CC) $(CFLAGS) -g test.c utils.c -o test
	valgrind --leak-check=full --track-origins=yes -s ./test > /dev/null

test:
	$(CC) $(CFLAGS) -g test.c utils.c -o test
	./test

# Clean
clean:
	rm -f cpu_monitor test
