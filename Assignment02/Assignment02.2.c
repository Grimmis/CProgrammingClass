// Lane W. Grooms
#include <stdio.h>

int main( void ) 
{
    int a, b;
    scanf( "%d%d", &a, &b );
    if( a < b ) 
    {
        printf("%d\n\n", a );
    } 
    else if( b < a ) 
    {
        printf("%d\n\n", b );
    } 
    else 
    {
        printf("%s", "The numbers are equal\n\n" );
    }   // end if
    return 0;
}   // end main