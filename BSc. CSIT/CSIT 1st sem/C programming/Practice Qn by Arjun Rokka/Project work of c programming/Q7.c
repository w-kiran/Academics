/*
Write a C program that asks the user to enter two numbers and then performs logical
operations on them using the following operators: && (logical AND), || (logical OR), ! (logical
NOT). Print the results of each operation to the console.

*/

#include <stdio.h>
int main()
{
    int p1, p2, fixp1, subp2;
    printf("\n\nEnter your password to unlock: ");
    scanf("%d %d", &p1, &p2);
    fixp1 = 123;
    subp2 = 123;

    if (p1 == fixp1 && p2 == subp2)
    {
        printf("\n You have successfully unlock.\n\n");
    }
    else if (p1 == fixp1 || p2 == subp2)
    {
        printf("\n Please check and try again !! \n\n");
    }
    else
    {
        printf("\nYour password is not correct, sorry not authorized\n\n");
    }
    return 0;
}