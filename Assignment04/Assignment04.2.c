//  Lane Grooms
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RANDCOUNT 100
#define SIZE 9

int main( void )
{
    srand( time( NULL ) );  // seed RNG
    int freqArray[SIZE + 1] = { 0 };
    for( size_t i = 0; i < RANDCOUNT; i++ )
    {
        freqArray[rand( ) % 10]++;
    }   // end for
    for( size_t j = 0; j <= SIZE; j++ )
    {
        printf( "%lu: %d\n", j, freqArray[j]);
    }   // end for  
    return 0;
}   // end main