#include <stdio.h>
#include <stdbool.h>

int main( void )
{
    /*
    int grade;
    puts("Enter the grade:");
    scanf("%d", &grade);

    if( grade >= 90 )
    {
        puts("A");
    }
    else if( grade >= 80 )
    {
        puts("B");
    }
    else if( grade >= 70)
    {
        puts("C");
    }
    else if( grade >= 60)
    {
        puts("D");
    }
    else
    {
        puts("Failed!");
    }
    */

    /*
    int grade = 90;
    puts( grade >= 60 ? "Passed" : "Failed" );

    */
    
    /*
    int value = 3;

    switch (value)
    {
    case 1:
        puts( "A" );
        break;
    case 2:
        puts( "B" );
        break;
    case 3:
        puts( "C" );
        break;
    case 4:
        puts( "D" );
        break;
    default:
        puts( "Invalid Value" );
        break;
    }
    */

    int value = 4;
    int day = 4;

    switch( day )
    {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            puts( "Weekday" );
            break;
        case 0:
        case 6:
            puts( "Weekend" );
            break;
        default:
            puts( "Invalid day number");
            break;
    }
    
    return 0;
}