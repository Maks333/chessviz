#define CTEST_MAIN


#include <board_print_plain.h>
#include <elephant.h>
#include <pawn.h>
#include <king.h>
#include <horse.h>
#include <queen.h>
#include <rook.h>
#include <ctest.h>

CTEST (Pawn_e2_e4, Correct_Pawn_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[0]=5;
    hodx[1]=6;
    hodx[2]=10;
    hodx[3]=5;
    hodx[4]=4;
    initBoard(a);
    int result=pawn(a, hodx[2], hodx[1], hodx[0], hodx[4], hodx[3]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

/*
CTEST (Pawn_d2_d3, InCorrect_Pawn1_h)
{
    char a[9][9];
    char hod[6];
    hod[0]='e';
    hod[1]='2';
    hod[2]='-';
    hod[3]='e';
    hod[4]='4';
    bbuild(a);
    int result=step(a,hod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}

CTEST (Pawn_e6xd7, InCorrect_Pawn2_h)
{
    char a[9][9];
    char hod[6];
    hod[0]='e';
    hod[1]='6';
    hod[2]='x';
    hod[3]='d';
    hod[4]='7';
    bbuild(a);
    a[2][5]='P';
    int result=step(a,hod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}
////////////
CTEST (King_e1_e2, InCorrect_King_h)
{
    char a[9][9];
    char hod[6];
    hod[0]='K';
    hod[1]='e';
    hod[2]='1';
    hod[3]='-';
    hod[4]='e';
    hod[5]='2';
    bbuild(a);
    a[6][5]=' ';
    int result=step(a,hod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}

CTEST (Queen_d1xd7, InCorrect_Queen_h)
{
    char a[9][9];
    char hod[6];
    hod[0]='Q';
    hod[1]='d';
    hod[2]='1';
    hod[3]='x';
    hod[4]='d';
    hod[5]='7';
    bbuild(a);
    a[6][5]=' ';
    int result=step(a,hod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}

CTEST (Bishop_c3_e5, InCorrect_Bishop_h)
{
    char a[9][9];
    char hod[6];
    hod[0]='B';
    hod[1]='c';
    hod[2]='3';
    hod[3]='-';
    hod[4]='e';
    hod[5]='5';
    bbuild(a);
    a[5][3]='B';
    int result=step(a,hod);
    int expected=0;
    ASSERT_EQUAL(expected, result);
}*/

int main(int argc, const char** argv)
{
    int test_result = ctest_main(argc, argv);
    return test_result;
}
