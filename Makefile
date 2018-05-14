CC=gcc
CFLAGS =  -c -Wall -Werror -std=c99
FLAGS  =  -Wall -Werror -std=c99
OBJECTS = build/main.o  build/rook.o build/horse.o build/elephant.o  build/king.o  build/queen.o build/board_read.o build/board_print_plain.o build/pawn.o

OB = build/main_test.o build/rook.o build/horse.o build/elephant.o  build/king.o  build/queen.o  build/board_print_plain.o build/pawn.o

.PHONY: clean all bin build default test

all: bin build default test

default: bin/prog

test: bin/prog_test
	bin/prog_test

bin/prog: $(OBJECTS) 
	$(CC) $(FLAGS) $(OBJECTS) -o bin/prog

build/main.o: scr/main.c scr/functions.h 
	$(CC) $(CFLAGS) scr/main.c  -o build/main.o

build/rook.o: scr/rook.c scr/functions.h 
	$(CC) $(CFLAGS) scr/rook.c -o build/rook.o

build/horse.o: scr/horse.c scr/functions.h 
	$(CC) $(CFLAGS) scr/horse.c -o build/horse.o

build/elephant.o: scr/elephant.c scr/functions.h 
	$(CC) $(CFLAGS) scr/elephant.c -o build/elephant.o

build/king.o: scr/king.c scr/functions.h 
	$(CC) $(CFLAGS) scr/king.c -o build/king.o

build/queen.o: scr/queen.c scr/functions.h 
	$(CC) $(CFLAGS) scr/queen.c -o build/queen.o

build/board_read.o: scr/board_read.c scr/functions.h 
	$(CC) $(CFLAGS) scr/board_read.c -o build/board_read.o

build/board_print_plain.o: scr/board_print_plain.c scr/functions.h 
	$(CC) $(CFLAGS) scr/board_print_plain.c -o build/board_print_plain.o

bin/prog_test: $(OB) 
	$(CC) $(FLAGS) $(OB) -o bin/prog_test

build/main_test.o: test/main.c thirdparty/ctest.h scr/functions.h 
	$(CC) $(CFLAGS) -I thirdparty -I scr -c test/main.c -o build/main_test.o

build:
	mkdir build
bin:
	mkdir bin 
clean:
	-rm -rf build bin
