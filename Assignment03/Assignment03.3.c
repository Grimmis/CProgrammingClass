// Lane W. Grooms
#include <stdio.h>

int main( void )
{
    int number, largest;

    for( size_t i = 0; i < 10; i++ )
    {
        printf( "%02lu: Input number: ", i + 1 );
        scanf( "%d", &number );

        if( i == 0 )
        {
            largest = number;
        }
        else if( number > largest )
        {
            largest = number;
        }   // end if
    }   // end for
    printf( "%d is the largest\n\n", largest );

    return 0;
}   // end main