// Lane Grooms
#include <stdio.h>

main( void )
{   /*
    for( int counter = 1; counter <= 10; counter++ )
    {
        printf( "%d/n", counter );
    }   // end for
    */
    /*
    for( int i = 0, j = 20; i < 10 && j > 5; i++, j -= 4 )
    {
        printf( "i = %d, j = %d", i, j );
    }   // end for
    */
    /*
    int i = 0, product = 0;
    for( i = 1; i <= 10; i++ )
    {
        product *= i;
    }   // end for
    printf( "Product = %d\n\n", product );
    */
    int counter = 0;
    do  // while begin
    {
        // executes the loop body at lease once
        break;  // exits the loop
        continue;   // goes directly to the next interation of the loop
    } while( ++counter <= 10 );
    return 0;
}   // end main
