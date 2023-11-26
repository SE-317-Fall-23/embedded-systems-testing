# Makefile for Smart Thermostat Testing Assignment

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11 -IUnity

# Source files
SRC = src/thermostat.c
TEST_SRC = test/test_thermostat.c Unity/unity.c

# Object files
OBJ = $(SRC:.c=.o) $(TEST_SRC:.c=.o)

# Executable
TARGET = thermostat_test

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(TARGET) $(OBJ)
