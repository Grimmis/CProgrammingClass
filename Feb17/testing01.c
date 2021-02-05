// Lane Grooms
#include <stdio.h>

//  FuncD
int square(int val);
int maximum(int a, int b, int c);
int func1(void);
int func2(void);
int func3(void);
int func4(void);

int main(void)
{   
    func1();
    return 0;
}   // end main

int mySquare(int val)
{
    return val * val;
}

int maximumOf3(int a, int b, int c)
{
    if(b < a > c)
    {
        return a;
    } 
    else if(a < b > c)
    {
        return b;
    }
    return c;
}

int func1(void)
{
    printf("%s\n", "Function 1\nCalling Function 2...");
    func2();
    puts("Returning 1");
    return 1;
}
int func2(void)
{
    printf("%s\n", "Function 2\nCalling Function 3...");
    func3();
    puts("Returning 2");
    return 2;
}
int func3(void)
{
    printf("%s\n", "Function 3\nCalling Function 4...");
    func4();
    puts("Returning 3");
    return 3;
}
int func4(void)
{
    printf("%s\n", "Function 4");
    puts("Returning 4");
    return 4;
}