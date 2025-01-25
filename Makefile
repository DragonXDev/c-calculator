CC = gcc
CFLAGS = -Wall -Wextra -Iinclude
SRC = src/main.c src/module.c
OBJ = $(SRC:.c=.o)
TARGET = build/my_program

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
