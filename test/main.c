#define CTEST_MAIN
#include <board_print_plain.h>
#include <pawn.h>
#include <horse.h>
#include <elephant.h>
#include <king.h>
#include <queen.h>
#include <rook.h>
#include <ctest.h>
//PAWN_TEST
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

CTEST (Pawn_e2_f4, InCorrect_Pawn_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[0]=5;
    hodx[1]=6;
    hodx[2]=10;
    hodx[3]=6;
    hodx[4]=4;
    initBoard(a);
    int result=pawn(a, hodx[2], hodx[1], hodx[0], hodx[4], hodx[3]);
    int expected=-1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Pawn_e2_f3, Correct_Pawn_Kill)
{
    char a[9][9];
    int hodx[6];
    hodx[0]=5;
    hodx[1]=6;
    hodx[2]=11;
    hodx[3]=6;
    hodx[4]=5;
    initBoard(a);
    a[4][6]='p';
    int result=pawn(a, hodx[2], hodx[1], hodx[0], hodx[4], hodx[3]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
//HORSE_TEST
CTEST (Horse_b1_c3, Correct_Horse_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=2;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=3;
    hodx[5]=5;
    initBoard(a);
    int result=pawn(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Horse_b1_b3, InCorrect_Horse_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=2;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=2;
    hodx[5]=5;
    initBoard(a);
    int result=pawn(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=-1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Horse_b1_c3, Correct_Horse_Kill)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=2;
    hodx[2]=7;
    hodx[3]=11;
    hodx[4]=3;
    hodx[5]=5;
    initBoard(a);
    a[5][3]='p';
    int result=pawn(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv)
{
    int test_result = ctest_main(argc, argv);
    return test_result;
}
