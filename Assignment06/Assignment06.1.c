///* Lane Grooms *///
#include <stdio.h>
#include <stdlib.h>

void swap(int * a, int * b);

int main(void)
{
    // Test swap();
    int x = 1, y = 0;
    printf("Before: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After : x = %d, y = %d\n", x, y);
    return 0;
}

void swap(int * a, int * b)
{
    int temp = *a;
    *a   = *b;
    *b   = temp;
    return;
}