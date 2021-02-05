// Lane W. Grooms
#include <stdio.h>

int main( void ) 
{
    int grade;
    printf( "%s", "Input grade: " );
    scanf( "%d", &grade );
    if( grade >= 90 ) 
    {
        printf( "%s", "A\n\n" );
    } 
    else if( grade >= 80 ) 
    {
        printf( "%s", "B\n\n" );
    } 
    else if( grade >= 70 ) 
    {
        printf( "%s", "C\n\n" );
    } 
    else if( grade >= 60 ) 
    {
        printf( "%s", "D\n\n" );
    } 
    else 
    {
        printf( "%s", "F\n\n" );
    }   // end if
    return 0;
}   // end main