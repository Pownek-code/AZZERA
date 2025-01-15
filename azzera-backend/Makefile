CC = gcc
CFLAGS = -Wall -Werror -Iinclude
LDFLAGS = -Llib

SRC = $(wildcard src/**/*.c src/*.c)
OBJ = $(SRC:.c=.o)
TARGET = build/azzera-backend

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

clean:
	rm -f $(OBJ) $(TARGET)

.PHONY: all clean

