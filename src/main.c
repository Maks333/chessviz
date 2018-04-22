#include <stdio.h>
#include <stdlib.h>
#include "board_print_plain.c"
#include "board_read.c"

int main () {
	
	char Board[9][9];
	int status=1,ErrorStatus=0;
	char hod[10];
	initBoard(Board);
	printBoard(Board);
	do{
		printf("\nPrint turn:\n");
		scanf("%s",hod);
        ErrorStatus=step(Board,hod);
        //system("CLS");
        if(ErrorStatus==-1) printf("prev turn:Error\n");
        else printf("prev turn:%s\n",hod);
        printBoard(Board);
        printf("\nend? 1/0\n");
        scanf("%d",&status);
}while(status==0);
	return 0;
}

	
