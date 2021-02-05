// Lane Grooms
#include <stdio.h>
#define ROWS 2
#define COLS 3

int main( void )
{
    int mat[ROWS][COLS] = { { 1, 2, 3 },
                            { 4, 5, 6 } };
    for( size_t i = 0; i < ROWS; i++ )
    { 
        for( size_t j = 0; j < COLS; j++ )
        {
            printf( "%d\t", mat[i][j] );
        }   // end for j
        puts("");
    }   // end for i
}   // end main