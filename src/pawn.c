#include <stdio.h>
#include "pawn.h"

int pawn(char Board[9][9], int str1, int stolb1, int str2, int stolb2) {
	
	if(stolb2!=stolb1) return -1;
	if(Board[str2][stolb2]!=' ') return -1;
	//if((Board[str2][stolb2]==' ')&&(Board[str2+1][stolb2]!=' ')) return -1;
	
	Board[str2][stolb2]=Board[str1][stolb1];
	Board[str1][stolb1]=' ';
	return 1;
}
