// Lane W. Grooms
#include <stdio.h>

int main( void )
{
    char repeat, letter, rtrn;
    unsigned int i, grade, total;
    float average;
    
    i = 0;
    total = 0;
    
    while( repeat != 'n' )
    {
        printf( "%s", "Input grade(y or n): " );
        scanf( "%c", &repeat );
        scanf( "%c", &rtrn );
        if( repeat == 'y' )
        {
            i++;
            scanf( "%d", &grade);
            scanf( "%c", &rtrn );
            total += grade;
        }
        else if( repeat == 'n' )
        {
            printf( "%s", "Calculating...\n" );
        }
        else 
        {
            printf( "%s", "Not a valid input...\n" );
        }   // end if
    }   // end while

    average = ( float ) total / i;

    if( average >= 90 )
    {
        letter = 'A';
    }
    else if( average >= 80 )
    {
        letter = 'B';
    }
    else if( average >= 70 )
    {
        letter = 'C';
    }
    else
    {
        letter = 'F';
    }   // end if

    printf( "\nThe average is %.2f (%c)\n\n", average, letter );

    return 0;
}   // end main