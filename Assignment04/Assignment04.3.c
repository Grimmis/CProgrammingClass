//  Lane Grooms
#include <stdio.h>

int main( void )
{
    for( size_t i = 0; i < 4; i++ )
    {
        for( size_t j = 0; j < 3; j++ )
        {
            printf( "%lu\t", i * 3 + j + 1 );
        }   // end for
        puts( "" );
    }   // end for
    return 0;
}   // end main