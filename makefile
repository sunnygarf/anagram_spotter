# makefile
# 2024-01-02

CC = gcc
CFLAGS = -g -Wall -std=c11 -Iinclude
LIBS =
TARGET = run

SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include
_DEPS = main.h parser.h spotter.h
_OBJS = main.o parser.o spotter.o

DEPS = $(patsubst %,$(INC_DIR)/%,$(_DEPS))
OBJS = $(patsubst %,$(OBJ_DIR)/%,$(_OBJS))

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJS)
	$(CC) -o $@ $(OBJS) $(LIBS)

.PHONY: clean
clean:
	$(RM) $(OBJS) $(TARGET)