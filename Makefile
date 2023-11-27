# Makefile for Smart Thermostat Testing Assignment

# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -std=c11 -IUnity

# Source files
SRC = src/thermostat.c src/temperature_controller.c
TEST_SRC = test/test_thermostat.c Unity/unity.c

# Object files
OBJ = $(SRC:.c=.o) $(TEST_SRC:.c=.o)

# Executable
TARGET = thermostat_test

# Check the operating system
ifeq ($(OS),Windows_NT)
    # Windows settings
    TARGET_EXT = .exe
    RM = del /Q
else
    # Linux settings
    TARGET_EXT =
    RM = rm -f
endif

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@$(TARGET_EXT) $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(TARGET)$(TARGET_EXT) $(OBJ)
