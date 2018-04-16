#include <stdio.h>
#include <stdlib.h>
#include "board_print_plain.c"


int main () {
	
	char Board[9][9];

	
	initBoard(Board);
	printBoard(Board);
	return 0;
}
	
