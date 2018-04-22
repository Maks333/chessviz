#include <stdio.h>
#include <stdlib.h>
#include "board_print_plain.h"


void initBoard ( char Board[9][9]) {
int o,p;
int u;
for (o=0; o<9; o++){
    for(p=0; p<9; p++){
    Board[o][p] = ' ';
    }
}
for (o=1; o<9; o++){
Board[1][o] = 'p';
}
for (o=0,u=8; o<8; o++,u--){
Board[o][0] = u + '0';
}
Board[0][1] = 'r'; Board[0][2] = 'n'; Board[0][3] = 'b'; Board[0][4] = 'q';
Board[0][5] = 'k'; Board[0][6] = 'b'; Board[0][7] = 'n'; Board[0][8] = 'r';
for (o=1; o<9; o++){
Board[6][o] = 'P';
}
Board[7][1] = 'R'; Board[7][2] = 'N'; Board[7][3] = 'B'; Board[7][4] = 'Q';
Board[7][5] = 'K'; Board[7][6] = 'B'; Board[7][7] = 'N'; Board[7][8] = 'R';
for (o=1,u=97; o<9;o++,u++){
Board[8][o] = u;
}
}

void printBoard ( char Board[9][9]) {
    int o,p;
    for (o=0; o<9; o++){
	for (p=0; p<9; p++){
	    printf("%c ",Board[o][p]);
	}
	printf("\n");
    }
}
	
