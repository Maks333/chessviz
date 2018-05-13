#include <stdio.h>
#include <string.h>
#include "pawn.h"
#include "board_read.h"
#include "elephant.h"
#include "horse.h"
#include "rook.h"
#include "queen.h"
#include "king.h"

int step ( char Board[9][9], char hod[10], int turn){
	int i;
	int hodx[10];
	int error;
	int len;
	error=0;
	len=strlen(hod);

	
for(i=0;i<len;i++){
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
    case '-':hodx[i]=10;
	break;
	case'x':hodx[i]=11;
	break;
	case'N':hodx[i]=0;
	break;
	case'n':hodx[i]=0;
	break;
	case 'B':hodx[i]=0;
	break;
	case 'R':hodx[i]=0;
	break;
	case 'Q':hodx[i]=0;
	break;
	case 'K':hodx[i]=0;
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
//if(flag==1) printf(" ");
if((Board[hodx[1]][hodx[0]]=='P')&&(turn==0))  return pawn(Board,hodx[2],hodx[1],hodx[0],hodx[4],hodx[3]);//e2-e4
	else if((Board[hodx[1]][hodx[0]]=='p')&&(turn==1))  return pawn(Board,hodx[2],hodx[1],hodx[0],hodx[4],hodx[3]);
	
if((Board[hodx[2]][hodx[1]]=='N')&&(turn==0)) return horse(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);
	else if((Board[hodx[2]][hodx[1]]=='n')&&(turn==1)) return horse(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);
	
if((Board[hodx[2]][hodx[1]]=='B')&&(turn==0)) return elephant(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);
	else if((Board[hodx[2]][hodx[1]]=='b')&&(turn==1)) return elephant(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);

if((Board[hodx[2]][hodx[1]]=='R')&&(turn==0)) return rook(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);
	else if((Board[hodx[2]][hodx[1]]=='r')&&(turn==1)) return rook(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);

if((Board[hodx[2]][hodx[1]]=='Q')&&(turn==0)) return queen(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);
	else if((Board[hodx[2]][hodx[1]]=='q')&&(turn==1)) return queen(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);

if((Board[hodx[2]][hodx[1]]=='K')&&(turn==0)) return king(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);
	else if((Board[hodx[2]][hodx[1]]=='k')&&(turn==1)) return king(Board,hodx[3],hodx[2],hodx[1],hodx[5],hodx[4]);		

	
else return -1;
return 1;
}
