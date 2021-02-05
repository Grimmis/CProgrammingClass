// Lane Grooms
#include <stdio.h>

int main( void )
{
    /* Quiz answer
    for( int i; i <= 25; i += 2 )
    {
        printf( "%d", i );
    }   // end for
    */
    
    // Arrays Lesson
    /*
    int arr[5];
    arr[0] = 2;
    arr[1] = 10;
    arr[2] = 3;
    arr[3] = -12;
    arr[4] = 100;
    */
    /*
    for( int i; i < 5; i++ )
    {
        printf( "%d\n", arr[i] );
    }
    */
    /* 
    int arr[5];
    
    for( size_t i = 0; i < 5; i++ )
    {
        arr[i] = 0;
    }
    */
    /* 
    int arr[8] = { 2, 10, 3, -12, 100 };
    // arr[8] = { 2, 10, 3, -12, 100, 0, 0, 0 };
    int zeros[4] = { 0 };
    // zeroes[4] = { 0, 0, 0, 0 };
    // int over[3] = { 2, 10, 3, -12 }; is an error
    */
    int arr[] = { 2, 10, 3, -12, 100 };
    // alternate syntax

    for( size_t i = 0; i < 5; i++ )
    {
        printf( "%d\n", arr[i] );
    }

    return 0;
}   // end main