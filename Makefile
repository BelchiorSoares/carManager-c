/* === Makefile === */
CC = gcc
CFLAGS = -Wall -Iinclude
SRC = src/main.c src/menu.c src/carro.c src/arquivo.c
OBJ = $(SRC:.c=.o)
BIN = build/programa

$(BIN): $(SRC)
	@mkdir -p build
	$(CC) $(CFLAGS) $(SRC) -o $(BIN)

clean:
	rm -rf build/*

run: $(BIN)
	./$(BIN)