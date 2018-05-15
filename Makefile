CC=gcc
CFLAGS= -Wall -Werror -c -std=c99
FLAGS= -Wall -Werror -std=c99

SRC=src/

dir=build/src/
dir_t=build/test/

objects=$(dir)main.o $(dir)board_read.o $(dir)board_print_plain.o $(dir)pawn.o $(dir)elephant.o $(dir)horse.o $(dir)king.o $(dir)queen.o $(dir)rook.o 
objects_test=$(dir_t)main_test.o $(dir_t)board_print_plain.o $(dir_t)pawn.o $(dir_t)elephant.o $(dir_t)horse.o $(dir_t)king.o $(dir_t)queen.o $(dir_t)rook.o

BIN=bin/


EXECUTABLE=$(BIN)main

.PHONY: all clean default test

all: bin build build_test  default test

default: $(EXECUTABLE)

test: $(BIN)main_test
	$(BIN)main_test

$(EXECUTABLE): $(objects)
	$(CC) $(FLAGS) $(objects) -o $@

$(dir)main.o: $(SRC)main.c src/board_print_plain.h src/board_read.h src/pawn.h src/horse.h src/elephant.h src/rook.h src/queen.h src/king.h
	$(CC) $(CFLAGS) $(SRC)main.c -o $@


$(dir)board_print_plain.o: $(SRC)board_print_plain.c $(SRC)board_print_plain.h
	$(CC) $(CFLAGS) $(SRC)board_print_plain.c -o $@

	
$(dir)board_read.o: $(SRC)board_read.c $(SRC)board_read.h
	$(CC) $(CFLAGS) $(SRC)board_read.c -o $@

$(dir)pawn.o: $(SRC)pawn.c $(SRC)pawn.h
	$(CC) $(CFLAGS) $(SRC)pawn.c -o $@

$(dir)horse.o: $(SRC)horse.c $(SRC)horse.h
	$(CC) $(CFLAGS) $(SRC)horse.c -o $@	

$(dir)elephant.o: $(SRC)elephant.c $(SRC)elephant.h
	$(CC) $(CFLAGS) $(SRC)elephant.c -o $@	

$(dir)king.o: $(SRC)king.c $(SRC)king.h
	$(CC) $(CFLAGS) $(SRC)king.c -o $@

$(dir)queen.o: $(SRC)queen.c $(SRC)queen.h
	$(CC) $(CFLAGS) $(SRC)queen.c -o $@

$(dir)rook.o: $(SRC)rook.c $(SRC)rook.h
	$(CC) $(CFLAGS) $(SRC)rook.c -o $@	
	
$(BIN)main_test: $(objects_test)
	$(CC) $(FLAGS) $(objects_test) -o $@

$(dir_t)main_test.o: test/main.c thirdparty/ctest.h   $(SRC)board_print_plain.h $(SRC)pawn.h $(SRC)elephant.h $(SRC)horse.h $(SRC)king.h $(SRC)queen.h $(SRC)rook.h 
	$(CC) $(CFLAGS) -I thirdparty -I src -c test/main.c -o $@

$(dir_t)board_print_plain.o: $(SRC)board_print_plain.c $(SRC)board_print_plain.h 
	$(CC) $(CFLAGS) $(SRC)board_print_plain.c -o $@
	
$(dir_t)pawn.o: $(SRC)pawn.c $(SRC)pawn.h 
	$(CC) $(CFLAGS) $(SRC)pawn.c -o $@
	
$(dir_t)elephant.o: $(SRC)elephant.c $(SRC)elephant.h 
	$(CC) $(CFLAGS) $(SRC)elephant.c -o $@

$(dir_t)horse.o: $(SRC)horse.c $(SRC)horse.h 
	$(CC) $(CFLAGS) $(SRC)horse.c -o $@

$(dir_t)king.o: $(SRC)king.c $(SRC)king.h 
	$(CC) $(CFLAGS) $(SRC)king.c -o $@

$(dir_t)queen.o: $(SRC)queen.c $(SRC)queen.h 
	$(CC) $(CFLAGS) $(SRC)queen.c -o $@

$(dir_t)rook.o: $(SRC)rook.c $(SRC)rook.h 
	$(CC) $(CFLAGS) $(SRC)rook.c -o $@
	
build:
	mkdir -p build/src
build_test:
	mkdir -p build/test
bin:
	mkdir bin
clean:
	-rm -rf build bin/main
