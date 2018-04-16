#include <stdio.h>
#include <stdlib.h>



void printBoard(char &Board) {
	int i,j;
	
	for(i=0;i<10;i++) {
		printf("\n");
		for(j=0;j<10;j++) {
			printf("%2c",Board[i][j]);
		}
	}
}
	
