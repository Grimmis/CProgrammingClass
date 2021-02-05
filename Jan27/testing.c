#include <stdio.h>
#include <stdbool.h>

int main( void ) {
    /* Talked about && and ||, i.e. the 'and' and 'or' operators;
        expressed the mathematical notion of "20 ≤ num < 30" as ( 20 <= num ) && ( num < 30 );
    */

    /*
    int gradePython, grade1022;
    gradePython = 80;
    grade1022   = 90;
    if(( gradePython >= 70 ) && ( grade1022 > 70 )) {
        printf( "%s", "You can register in Java Class\n");
    } else {
        printf( "%s", "Try again next semester\n");
    }   // end if
    */

    /*
    int x, y;
    x = 10;
    y = 20;
    // swap the variables
    int temp;
    temp = x;   // temp = 10
    x = y;      // x    = 20
    y = temp;   // y    = 10
    */

    /*
    int min = 50, max = 20;

    if( min > max ) {
        int temp = min;
        min = max;
        max = temp;
    }   // end if

    printf( "min = %d, max = %d\n", min, max );
    */
   
    bool isGreater;
    isGreater = 50 > 30;

    if( isGreater == true ) {
        printf( "%s", "Greater\n" );
    } else {
        printf( "%s", "Less than or equal to" );
    }   // end if

    return 0;
}   // end main