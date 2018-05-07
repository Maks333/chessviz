#include <stdio.h>
#include "elephant.h"
#include <math.h>

int elephant(char Board[9][9],  int type ,int str1, int stolb1, int str2, int stolb2)
{
	int a,b;
	if(type==10)
	{
		if(Board[str2][stolb2]!=' ') return -1;
		if((abs((stolb2-str2)%2)==0)&&(abs((stolb1-str1)%2)==0));
			else if((abs((stolb2-str2)%2)==1)&&(abs((stolb1-str1)%2)==1));
				else return -1;
		if(stolb2==stolb1) return -1;
		
		Board[str2][stolb2]=Board[str1][stolb1];
		Board[str1][stolb1]=' ';
	}
	else if((type==11)&&(Board[str2][stolb2]!=' ')) 
	{
		if((abs((stolb2-str2)%2)==0)&&(abs((stolb1-str1)%2)==0));
		else if((abs((stolb2-str2)%2)==1)&&(abs((stolb1-str1)%2)==1));
			else return -1;
			
		
		Board[str2][stolb2]=Board[str1][stolb1];
		Board[str1][stolb1]=' ';	
	}
	return 1;
}

