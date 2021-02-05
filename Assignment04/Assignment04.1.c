//  Lane Grooms
#include <stdio.h>
#define SIZE 10

int main( void )
{
    int array[SIZE] = { 5, 24, 76, 1, 8, 53, 40, 7, 33, 10 };
    int big, small, bigIndex, smallIndex, total = 0;
    for( size_t i = 0; i < SIZE; i++ )
    {
        if( i == 0 )
        {
            big = array[i];
            bigIndex = i;
            small = array[i];
            smallIndex = i;
        }   
        else
        {
            if( big < array[i] )
            {
                big = array[i];
                bigIndex = i;
            }
            else if( small > array[i] )
            {
                small = array[i];
                smallIndex = i;
            }   // end if
        }   // end if
        total += array[i];
    }   // end for
    printf( "Biggest # was %d at index %d\n", big, bigIndex );
    printf( "Smallest # was %d at index %d\n", small, smallIndex );
    printf( "Average of the #'s in the array: %f\n\n", (float)total / SIZE );
    return 0;
}   // end main