#include <stdio.h>
#include <string.h>
#include "pawn.h"
#include "board_read.h"

int step ( char Board[9][9], char hod[10], int turn){
	int i,j;
	int hodx[10];
	int flag;
	int error;
	error=0;

	
for(i=0;i<5;i++){
	if(error==1) return -1;
switch(hod[i])
{
    case 'a':hodx[i]=1;
	break;
	case '1':hodx[i]=7;
	break;
    case 'b':hodx[i]=2;
	break;
	case '2':hodx[i]=6;
	break;
    case 'c':hodx[i]=3;
	break;
	case '3':hodx[i]=5;
	break;
    case 'd':case '4':hodx[i]=4;
	break;
    case 'e':hodx[i]=5;
	break;
	case '5':hodx[i]=3;
	break;
    case 'f':hodx[i]=6;
	break;
	case '6':hodx[i]=2;
	break;
    case 'g':hodx[i]=7;
	break;
	case '7':hodx[i]=1;
	break;
    case 'h':hodx[i]=8;
	break;
	case '8':hodx[i]=0;
	break;
    case '-':flag=1;hodx[i]=0;
	break;
    default:
      printf("Error, try again\n");
      error=1;
      break;
}
}

//printf("\n%c %c \n",Board[hodx[1]][hodx[0]],Board[hodx[4]][hodx[3]]);

//int a,b;
//a=hodx[0],b=hodx[1];

if((Board[hodx[1]][hodx[0]]=='P')&&(turn==0))  return pawn(Board,hodx[1],hodx[0],hodx[4],hodx[3]);
	else if((Board[hodx[1]][hodx[0]]=='p')&&(turn==1))  return pawn(Board,hodx[1],hodx[0],hodx[4],hodx[3]);
else return -1;
return 1;
}
