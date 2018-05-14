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
CTEST (Horse_g1_f3, Correct_Horse_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=7;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=6;
    hodx[5]=5;
    initBoard(a);
    int result=horse(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Horse_b1_d5, InCorrect_Horse_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=2;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=4;
    hodx[5]=3;
    initBoard(a);
    int result=horse(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
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
    int result=horse(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
//ELEPHANT TEST
CTEST (Elephant_f1_d3, Correct_Elephant_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=6;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=4;
    hodx[5]=5;
    initBoard(a);
    int result=elephant(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Elephant_c1_f5, InCorrect_Elephant_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=3;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=6;
    hodx[5]=5;
    
    a[7][3]='B';
    int result=elephant(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=-1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Elephant_c1_e3, Correct_Elephant_Kill)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=3;
    hodx[2]=7;
    hodx[3]=11;
    hodx[4]=5;
    hodx[5]=5;
    
    a[7][3]='B';
    a[5][5]='p';
    
    int result=elephant(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
//ROOK TEST
CTEST (Rook_h1_h5, Correct_Rook_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=8;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=8;
    hodx[5]=3;
    
    initBoard(a);
    
    int result=rook(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Rook_h1_g4, InCorrect_Rook_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=8;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=7;
    hodx[5]=4;
    
    a[7][8]='R';
    
    int result=rook(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=-1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Rook_h1_h5, Correct_Rook_Kill)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=8;
    hodx[2]=7;
    hodx[3]=11;
    hodx[4]=8;
    hodx[5]=3;
    
    a[7][8]='R';
    a[3][8]='p';
    int result=rook(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
//QUEEN TEST
CTEST (Quenn_d1_b3, Correct_Queen_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=4;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=2;
    hodx[5]=5;
    
    initBoard(a);
    
    int result=queen(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Quenn_d1_d7, InCorrect_Queen_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=4;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=4;
    hodx[5]=1;
    
    a[7][4]='Q';
    
    int result=queen(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=-1;
    ASSERT_EQUAL(expected, result);
}

CTEST (Quenn_d1_b3, Correct_Queen_Kill)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=4;
    hodx[2]=7;
    hodx[3]=11;
    hodx[4]=2;
    hodx[5]=5;
    
    a[7][4]='Q';
    a[5][2]='p';
    
    int result=queen(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}
//KING TEST
CTEST (King_e1_e2, Correct_King_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=5;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=5;
    hodx[5]=6;
    
    a[7][5]='K';
    a[6][5]=' ';
    
    int result=king(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

CTEST (King_e1_e2, InCorrect_King_Turn)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=5;
    hodx[2]=7;
    hodx[3]=10;
    hodx[4]=5;
    hodx[5]=6;
    
    a[7][5]='K';
    a[6][5]='P';
    
    int result=king(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=-1;
    ASSERT_EQUAL(expected, result);
}

CTEST (King_e1_f2, Correct_King_Kill)
{
    char a[9][9];
    int hodx[6];
    hodx[1]=5;
    hodx[2]=7;
    hodx[3]=11;
    hodx[4]=6;
    hodx[5]=6;
    
    a[7][5]='K';
    a[6][6]='p';
    
    int result=king(a, hodx[3], hodx[2], hodx[1], hodx[5], hodx[4]);
    int expected=1;
    ASSERT_EQUAL(expected, result);
}

int main(int argc, const char** argv)
{
    int test_result = ctest_main(argc, argv);
    return test_result;
}
