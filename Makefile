CC = gcc
CFLAGS  = -Wall -Werror -std=c99
FLAGS   = -Wall -Werror -std=c99
LDFLAGS = -lm
.PHONY: clean

all: bin/chessviz

test: bin/main_test
	bin/main_test

bin/chessviz: build/main.o build/board_print_plain.o build/board_read.o build/pawn.o build/horse.o build/elephant.o build/rook.o build/queen.o build/king.o   bin
	$(CC) $(CFLAGS) $(LDFLAGS) build/main.o build/board_print_plain.o build/board_read.o build/pawn.o build/horse.o build/elephant.o build/rook.o build/queen.o build/king.o  -o bin/chessviz

build/main.o: src/main.c src/board_print_plain.h src/board_read.h src/pawn.h src/horse.h src/elephant.h src/rook.h src/queen.h src/king.h build
	$(CC) $(CFLAGS) $(LDFLAGS) -c src/main.c -o build/main.o
	
build/board_print_plain.o: src/board_print_plain.c src/board_print_plain.h build
	$(CC) $(CFLAGS) $(LDFLAGS) -c src/board_print_plain.c -o build/board_print_plain.o

build/board_read.o: src/board_read.c src/board_read.h build
	$(CC) $(CFLAGS) $(LDFLAGS) -c src/board_read.c -o build/board_read.o

build/pawn.o: src/pawn.c src/pawn.h build
	$(CC) $(CFLAGS) $(LDFLAGS) -c src/pawn.c -o build/pawn.o
	
	
build/horse.o: src/horse.c src/horse.h build
	$(CC) $(CFLAGS) $(LDFLAGS) -c src/horse.c -o build/horse.o 

build/elephant.o: src/elephant.c src/elephant.h build
	$(CC) $(CFLAGS) $(LDFLAGS) -c src/elephant.c -o build/elephant.o

build/rook.o: src/rook.c src/rook.h build
	$(CC) $(CFLAGS) $(LDFLAGS) -c src/rook.c -o build/rook.o

build/queen.o: src/queen.c src/queen.h build
	$(CC) $(CFLAGS) $(LDFLAGS) -c src/queen.c -o build/queen.o

build/king.o: src/king.c src/king.h build
	$(CC) $(CFLAGS) $(LDFLAGS) -c src/king.c -o build/king.o

bin/main_test: build/main_test.o  build/board_print_plain.o build/pawn.o build/elephant.o build/king.o build/horse.o build/queen.o build/rook.o bin
	$(CC) $(FLAGS) build/main_test.o  build/board_print_plain.o build/pawn.o build/elephant.o build/king.o build/horse.o build/queen.o build/rook.o -o bin/main_test
	
build/main_test.o: test/main.c thirdparty/ctest.h src/function.h build
	$(CC) $(CFLAGS) -I thirdparty -I src -c test/main.c -o build/main_test.o	
	
build:
	mkdir build

bin:
	mkdir bin

clean:
	rm -rf build bin 
