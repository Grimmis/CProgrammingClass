#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

void printArray(int arr[], int size);
void printArray2(int *p, int size);
void doubleArray(int arr[], int size);
int * createArray(int size);
void circleProperties(float radius, float * perimeter, float * area);
//int * returnPointer();

int main(void)
{
    float radius = 5, perimeter = 0, area = 0;
    circleProperties(radius, &perimeter, &area);
    printf("Perimeter = %f, area = %f\n", perimeter, area);
    /*
    int arrNumbers[SIZE] = {5, 2, 9, 4, 1};
    int s = 3;
    int * ptr = createArray(s);
    ptr[0] = 5;
    ptr[1] = 8;
    ptr[2] = 3;
    printArray2(ptr, s);
    //int * ptr = returnPointer(); 
    //doesn't work because it returns the address of a local variable.
    */
    /*
    int *ptr = NULL;
    ptr = (int*)malloc(sizeof(int)*SIZE); // !MALLOC!
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;
    printArray(ptr, SIZE);
    free(ptr); // *FREE*
    ptr = NULL;
    */
    /*
    int arrNumbers[SIZE] = {5, 2, 9, 4, 1};
    int *ptr = NULL;
    ptr = (int*)malloc(sizeof(int)); // !MALLOC!
    *ptr = 8;
    printf("The value of the memory is %d\n", *ptr);
    free(ptr); // *FREE*
    ptr = NULL;
    */
    /*
    printArray(arrNumbers, SIZE);
    int * p = arrNumbers;
    printArray2(arrNumbers, SIZE);
    doubleArray(arrNumbers, SIZE);
    printArray2(arrNumbers, SIZE);
    */
    return 0;
}

void printArray(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    puts("");
}

void printArray2(int *p, int size)
{
    for(int i = 0; i < size; i++)
    {
        printf("%d ", p[i]);
    }
    puts("");
}

void doubleArray(int arr[], int size)
{
    for(int i = 0; i < SIZE; i++)
    {
        arr[i] *= 2;
    }
}

/*
int * returnPointer(void)
{
    int i = 5;
    return &i;
}
*/
int * createArray(int size)
{
    int * p = (int*)malloc(sizeof(int)*size); // !MALLOC!
    return p;
}

void circleProperties(float radius, float * perimeter, float * area)
{
    float pi = 3.1415;
    *perimeter = radius * 2 * pi;
    *area = pi * radius * radius;
    return;
}