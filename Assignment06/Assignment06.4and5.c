///* Lane Grooms *///
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

float * createArray(int size);

int main(void)
{
    float * arr = createArray(SIZE);
    for(size_t i = 0; i < SIZE; i++)
    {
        arr[i] = (float)i;
        printf("%f\n", arr[i]);
    }
    free(arr);
    arr = NULL;  
    return 0;
}

float * createArray(int size)
{
    return (float *)malloc(sizeof(float) * size);
}