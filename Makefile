CC = gcc
CFLAGS  = -Wall -Werror

.PHONY: clean

all: bin/chessviz

bin/chessviz: build/main.o build/board_print_plain.o build/board_read.o build/pawn.o  bin
	$(CC) $(CFLAGS) build/main.o build/board_print_plain.o build/board_read.o build/pawn.o -o bin/chessviz

build/main.o: src/main.c src/board_print_plain.h src/board_read.h src/pawn.h build
	$(CC) $(CFLAGS) -c src/main.c -o build/main.o
	
build/board_print_plain.o: src/board_print_plain.c src/board_print_plain.h build
	$(CC) $(CFLAGS) -c src/board_print_plain.c -o build/board_print_plain.o

build/board_read.o: src/board_read.c src/board_read.h build
	$(CC) $(CFLAGS) -c src/board_read.c -o build/board_read.o

build/pawn.o: src/pawn.c src/pawn.h build
	$(CC) $(CFLAGS) -c src/pawn.c -o build/pawn.o
	
build:
	mkdir build

bin:
	mkdir bin

clean:
	rm -rf build bin