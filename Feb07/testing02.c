// Lane Grooms
#include <stdio.h>
#define SIZE 10

int main( void )
{   // intit
    int arr[SIZE] = { 4, 8, 12, 20, 5, 16, 2, 9, 11, 17 };
    size_t count = 0;
    // logic
    for( size_t i = 0; i < SIZE; i++ )
    {   // for i in arr
        if( arr[i] == 5 )
        {   // if i in arr is 5
            count++;
        }   // end if
    }   // end for i
    printf( "There are %lu 5's in the array\n\n", count );
}   // end main