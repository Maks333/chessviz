#include <stdio.h>
#include <stdlib.h>
#include "board_print_plain.h"


int main (int argc, char *argv[]) {
	
	char Board[9][9];

	
	initBoard(Board);
	printBoard(Board);
	return 0;
}
	
