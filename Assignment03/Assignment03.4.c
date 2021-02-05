// Lane W. Grooms
#include <stdio.h>

int main( void )
{
    unsigned long number, sum = 0, sumsq = 0, sumcb = 0;

    printf( "%s", "Enter a number: " );
    scanf( "%lu", &number );

    for( size_t i = 1; i <= number; i++ ) 
    {
        sum += i;
        sumsq += i * i;
        sumcb += i * i * i;
    }   // end for

    printf( "sum = %lu\nsum of squares = %lu\nsum of cubes = %lu\n", sum, sumsq, sumcb );

    return 0;
}   // end main