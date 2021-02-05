// Lane Grooms
#include <stdio.h>

int main( void ) {
    /*
    int i = 0;
    while( i < 8 ) {
        printf( "%d\n", i++ );
    }   // end while
    printf( "End of loop\n\n" );
    */
    /*
    int total = 0, counter = 0, grade = 0; 
    while( grade != -1 ) {
        counter++;
        total += grade;
        printf( "%d: Enter grade( -1 to end ): ", counter );
        scanf( "%d", &grade );
    }   // end while
    if( counter != 1 ) {
        printf( "Average: %.2f\n\n", (float) total / ( counter - 1 ) );
    }   // end if
    */
    unsigned int student = 0, passes = 0, failures = 0, result;
    while( student <= 10 ) {
        student++;
        printf( "%u: Enter 1 for pass or 0 for fail: ", student );
        scanf( "%u", &result );
        if( result == 0 || result == 1 ) { 
            result ? passes++ : failures++;
        }   // end if
    }   // end while
    printf( "Passed %u\nFailed %u\n\n", passes, failures );
    return 0;
}   // end main