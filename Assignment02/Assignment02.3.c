// Lane W. Grooms
#include <stdio.h>

int main( void ) 
{
    int hours;
    float rate, salary;
    printf( "%s", "Enter # of hours worked: " );
    scanf( "%d", &hours );
    printf( "%s", "Enter hourly rate of the worker ($10.00): " );
    scanf( "%f", &rate );
    if( hours > 40 ) 
    {
        int overtime = hours - 40;
        salary = ( hours - overtime ) * rate + overtime * rate * 1.5;
    } 
    else 
    {
        salary = hours * rate;
    }   // end if
    printf( "Salary is %.2f\n\n", salary );
    return 0;
}   // end main