// Lane W. Grooms
// include standard input/output
#include <stdio.h>

// main function
int main( void )
{
    /*
    // variable declaration
    int a, b, c, d, e, ans;
    printf("Please enter values for the following:\n");
    // data entry
    printf( "a = " );
    scanf( "%d", &a );
    printf( "b = " );
    scanf( "%d", &b );
    printf( "c = " );
    scanf( "%d", &c );
    printf( "d = " );
    scanf( "%d", &d );
    printf( "e = " );
    scanf( "%d", &e );
    // computation
    ans = ( a / (float)b ) + ( ( c + d ) / (float)e );
    // print result
    printf( "The result is %d\n", ans );
    */
   int a, b, c, d, e;
   puts("Enter 5 numbers:");
   scanf( "%d%d%d%d%d", &a, &b, &c, &d, &e);
   printf( "The result is %f\n", a / (float)b + ( c + d ) / (float)e );
}