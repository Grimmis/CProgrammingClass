// Lane Grooms
#include <stdio.h>
#include <stdbool.h>
#define SIZE 10

int main( void )
{   // var init
    int array01[] = { 4, 8, 12, 20, 5, 16, 2, 9, 11, 17 };
    int matrix01[][] = { 2, 3, 4, 5, 6, 7, 8, 9 };
    int max = array01[0];
    // logic 01
    for( size_t i = 0; i < SIZE; i++ )
    {   // for i in array01
        if( max < array01[i] )
        {   // if max is lt i in array01
            max = array01[i];
        }   // end if max is lt i
    }   // end for i
    printf( "The max value in array01 is %d", max );
    return 0;
}   // end main

// Find the max value of an array
// Find the min value of an aray
// Find the average of an array
// Find the average of a 2d array by row
// Search for a value in an array, report index if present