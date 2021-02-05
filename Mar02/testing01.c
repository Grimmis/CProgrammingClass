///* Lane Grooms *///
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROWS 4
#define COLS 3

void printArray(int ** arr, int rows, int cols);

int main(void)
{
    // dynamic allocation of rows
    int ** arr = (int **)malloc(sizeof(int *) * ROWS);
    // dynamic allocation of cols
    for(size_t i = 0; i < ROWS; i++)
    {
        arr[i] = (int *)malloc(sizeof(int) * COLS);
    }

    // filling the array
    size_t counter = 0;
    for(size_t i = 0; i < ROWS; i++)
    {
        for(size_t j = 0; j < COLS; j++)
        {
            arr[i][j] = counter++;
        }
    }

    // print the array
    printArray(arr, ROWS, COLS);
    /*
    for(size_t i = 0; i < ROWS; i++)
    {
        for(size_t j = 0; j < COLS; j++)
        {
            printf("%d\n", arr[i][j]);
        }
    }
    */

    // free the columns
    for(size_t i = 0; i < ROWS; i++)
    {
        free(arr[i]);
    }
    // free the array itself
    free(arr);

    return 0;
}

void printArray(int ** arr, int rows, int cols)
{
    for(size_t i = 0; i < rows; i++)
    {
        for(size_t j = 0; j < cols; j++)
        {
            printf("%d", arr[i][j]);
        }
        puts("");
    }
    return;
}