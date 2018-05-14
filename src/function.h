#ifndef H_MYPROG
#define H_MYPROG
void initBoard(char Board[9][9]);
int pawn(char Board[9][9], int type ,int str1, int stolb1, int str2, int stolb2);
int elephant(char Board[9][9],  int type ,int str1, int stolb1, int str2, int stolb2);
int horse(char Board[9][9], int type ,int str1, int stolb1, int str2, int stolb2);
int king(char Board[9][9],  int type ,int str1, int stolb1, int str2, int stolb2);
int queen(char Board[9][9],  int type ,int str1, int stolb1, int str2, int stolb2);
int rook(char Board[9][9],  int type ,int str1, int stolb1, int str2, int stolb2);
#endif
