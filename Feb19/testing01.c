// Lane Grooms
#include <stdio.h>
#include <stdbool.h>
#include "functions.h"

int main(void)
{
    int val = 5;
    int valTwice = twice(val);
    int valSquare = square(val);
    printf("twice: %d\n", valTwice);
    printf("square: %d\n", valSquare);
    sayHello();
}