// Write a C program that uses an if - else statement to check if a given integer is even or odd.Print a message to the console indicating the result.
#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        printf("Even");
    }
    else
        printf("Odd");

    return 0;
}