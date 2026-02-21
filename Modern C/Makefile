# Compiler and compilation flags
CC = gcc
CFLAGS = -Wall -Wextra -I. -DUNITY_OUTPUT_COLOR

# The Unity framework source file
UNITY_SRC = test/unity/unity.c

# Default challenge number (runs challenge 1 if no number is provided)
N ?= 1

# Define the test source file dynamically based on the challenge number (N)
TEST_SRC = test/$(N)/chalenge$(N)_test.c

# The name of the compiled executable
TARGET = test_runner

# Define commands that are not actual files
.PHONY: all test clean

# Default action when you just type 'make'
all: test

# Target to compile and run the test
test:
	@echo "--- Compiling and running tests for Challenge $(N) ---"
	$(CC) $(CFLAGS) -o $(TARGET) $(TEST_SRC) $(UNITY_SRC)
	./$(TARGET)

# Target to clean up compiled files
clean:
	@echo "--- Cleaning up ---"
	rm -f $(TARGET)
