#include <stdio.h>
#include <stdlib.h>
#include "board_print_plain.c"
#include "board_read.c"

int main () {
	
	char Board[9][9];
	int status=1;
	
	initBoard(Board);
	printBoard(Board);
	do{
		
		printf("\nВаш ход?\n");
        step(Board);
        printBoard(Board);
        printf("\nend? 1/0\n");
        scanf("%d",&status);
}while(status==0);
	return 0;
}
	
