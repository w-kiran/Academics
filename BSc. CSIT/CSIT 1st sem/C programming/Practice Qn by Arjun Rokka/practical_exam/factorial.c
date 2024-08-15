#include <stdio.h>
// to calculate factorial using recursion then we need to know that base case and general case. base case determine the program should run infinity or finite.
int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

int main()
{
    int num = 5;
    printf("\nFactorial of %d is %d.", num, factorial(num));
    return 0;
}