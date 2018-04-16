#include <stdio.h>
#include <string.h>

int step ( char Board[9][9],char hod[10]){
	int i;
	int hodx[10];
	int flag;
	int error;
	error=0;

	
for(i=0;i<5;i++){
	if(error==1) return -1;
switch(hod[i])
{
    case 'a':case '1':hodx[i]=1;
	break;
    case 'b':case '2':hodx[i]=2;
	break;
    case 'c':case '3':hodx[i]=3;
	break;
    case 'd':case '4':hodx[i]=4;
	break;
    case 'e':case '5':hodx[i]=5;
	break;
    case 'f':case '6':hodx[i]=6;
	break;
    case 'g':case '7':hodx[i]=7;
	break;
    case 'h':case '8':hodx[i]=8;
	break;
    case '-':flag=1;hodx[i]=0;
	break;
    default:
      printf("Error, try again");
      error=1;
      break;
}
}
return 1;
}
