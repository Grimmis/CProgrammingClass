// Lane W. Grooms
#include <stdio.h>

int main( void ) 
{
    int number;
    printf( "%s", "Enter a number: " );
    scanf( "%d", &number );
    // printf( "%d\n", number % 7 );
    switch( number % 7 ) 
    {
        case 0:
            printf( "%s", "Nice\n\n" );
            break;
        case 1: case 3:
            printf( "%s", "Good\n\n" );
            break;
        case 2:
            printf( "%s", "Cool\n\n" );
            break;
        case 4: case 5: case 6:
            printf( "%s", "Well\n\n" );
            break;
    }   // end switch
    return 0;
}   // end main