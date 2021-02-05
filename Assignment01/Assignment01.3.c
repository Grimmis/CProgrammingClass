// Lane W. Grooms
// include standard inpute/output
#include <stdio.h>

// main function
int main( void )
{
    /*
    // variable declaration: length, width, area
    int l, w, a;
    printf( "length = " );
    scanf( "%d", &l );
    printf( "width = " );
    scanf( "%d", &w );
    // area calculation
    a = l * w;
    printf( "The area of the rectangle is %d\n", a );
    */

   float l, w;
   puts("Enter the length and width values:");
   scanf( "%f%f", &l, &w);
   printf( "The area of the rectangle is %f\n", l * w );
}