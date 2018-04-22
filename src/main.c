#include <stdio.h>
#include <stdlib.h>
#include "board_print_plain.c"
#include "board_read.c"


int main () {
	
	char Board[9][9];
	int status=1,ErrorStatus;
	char hod[10];
	int turn=0;
	initBoard(Board);
	printBoard(Board);
	do{
		ErrorStatus=0;
		if(turn==0) printf("\nWhite");
		if(turn==1) printf("\nBlack");
		printf("\nPrint turn:\n");
		scanf("%s",hod);
        ErrorStatus=step(Board,hod,turn);
        //system("CLS");
        if(ErrorStatus==-1) printf("prev turn:Error\n");
        else printf("prev turn:%s\n",hod);
        printBoard(Board);
        printf("\nend? 1/0\n");
        scanf("%d",&status);
		if((turn==0)&&(ErrorStatus!=-1)) turn=1;
			else if ((turn==1)&&(ErrorStatus!=-1)) turn=0;
}while(status==0);
	return 0;
}

	
