///* Lane Grooms *///
#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

int main(void)
{
    float arr[SIZE] = {0};
    for(size_t i = 0; i < SIZE; i++)
    {
        arr[i] = i;
    }
    
    float * ptr = arr;
    size_t total = 0;
    float average = 0.0;
    for(size_t i = 0; i < SIZE; i++)
    {
        total += *(ptr + i);
    }
    average = total / (float)SIZE;
    printf("%f\n", average);

    return 0;
}