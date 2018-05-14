#define CTEST_MAIN
#include <board_print_plain.h>
#include <pawn.h>
#include <horse.h>
#include <elephant.h>
#include <king.h>
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

CTEST (Pawn_e2_f4, UnCorrect_Pawn_Turn)
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

int main(int argc, const char** argv)
{
    int test_result = ctest_main(argc, argv);
    return test_result;
}
