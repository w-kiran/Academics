// Write a program to find the sum of digits of a given integer using recursion.

#include <stdio.h>
int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return (n % 10) + sum(n / 10);
    }
}

int main()
{
    double n = 4510;
    printf("Sum = %d", sum(n));
    return 0;
}
/*
while(n>0){
rem=n%10;
sum+=rem;
n=n/10;
}
*/