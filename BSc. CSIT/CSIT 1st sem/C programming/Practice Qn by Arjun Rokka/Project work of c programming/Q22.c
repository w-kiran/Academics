/*
Write a C program that uses if statements with logical operators to check if a given integer is
a prime number. Print a message to the console indicating the result.
*/

#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter a number: ");
    scanf("%d", &n);

    int count = 0;           // initialize count to 0
    for (i = 1; i <= n; i++) // initialize i and fix loop condition
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        printf("\n %d is a prime", n);
    }

    return 0;
}
