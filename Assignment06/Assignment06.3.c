///* Lane Grooms *///
#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

void findMaxAndPos(int * arr, int size, int * max, int * pos);

int main(void)
{
    int arr[SIZE] = {0, 3, 5, 2, 4};
    int max = 0, pos = 0;
    findMaxAndPos(arr, SIZE, &max, &pos);
    printf("max = %d\npos = %d\n", max, pos);
    return 0;
}

void findMaxAndPos(int * arr, int size, int * max, int * pos)
{
    *max = arr[0];
    *pos = 0;
    for(size_t i = 1; i < size; i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
            *pos = i;
        }
    }
    return;
}