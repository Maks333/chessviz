CXX=gcc
CFLAGS = -c -Wall -Werror -std=c99
FLAGS  = -Wall -Werror -std=c99
OBJECTS = build/main.o  build/rook.o build/horse.o build/elephant.o  build/king.o  build/queen.o build/board_read.o build/board_print_plain.o build/pawn.o

OB = build/main_test.o build/rook.o build/horse.o build/elephant.o  build/king.o  build/queen.o  build/board_print_plain.o build/pawn.o

.PHONY: clean all bin build default test

all: bin build default test

default: bin/prog

test: bin/prog_test
	bin/prog_test

bin/prog: $(OBJECTS) 
	$(CXX) $(FLAGS) $(OBJECTS) -o bin/prog

build/main.o: src/main.c src/functions.h 
	$(CXX) $(CFLAGS) src/main.c  -o build/main.o

build/rook.o: srс/rook.c src/functions.h 
	$(CXX) $(CFLAGS) src/rook.c -o build/rook.o

build/horse.o: src/horse.c src/functions.h 
	$(CXX) $(CFLAGS) src/horse.c -o build/horse.o

build/elephant.o: src/elephant.c src/functions.h 
	$(CXX) $(CFLAGS) src/elephant.c -o build/elephant.o

build/king.o: src/king.c src/functions.h 
	$(CXX) $(CFLAGS) src/king.c -o build/king.o

build/queen.o: src/queen.c src/functions.h 
	$(CXX) $(CFLAGS) src/queen.c -o build/queen.o

build/board_read.o: src/board_read.c src/functions.h 
	$(CXX) $(CFLAGS) src/board_read.c -o build/board_read.o

build/board_print_plain.o: src/board_print_plain.c src/functions.h 
	$(CXX) $(CFLAGS) src/board_print_plain.c -o build/board_print_plain.o

bin/prog_test: $(OB) 
	$(CXX) $(FLAGS) $(OB) -o bin/prog_test

build/main_test.o: test/main.c thirdparty/ctest.h src/functions.h 
	$(CXX) $(CFLAGS) -I thirdparty -I src -c test/main.c -o build/main_test.o

build:
	mkdir build
bin:
	mkdir bin 
clean:
	-rm -rf build bin
