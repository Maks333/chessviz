#include <stdio.h>
#include "king.h"
#include <math.h>

int king(char Board[9][9],  int type ,int str1, int stolb1, int str2, int stolb2)
{
	if(type==10)
	{
		if(Board[str2][stolb2]!=' ') return -1;
		if((abs(str1-str2)>1)||(abs(stolb1-stolb2)>1)) return -1;
		
		Board[str2][stolb2]=Board[str1][stolb1];
		Board[str1][stolb1]=' ';
	}
	else if((type==11)&&(Board[str2][stolb2]!=' ')) 
	{
		if((abs(str1-str2)>1)||(abs(stolb1-stolb2)>1)) return -1;
			
		
		Board[str2][stolb2]=Board[str1][stolb1];
		Board[str1][stolb1]=' ';	
	}
	return 1;
}
