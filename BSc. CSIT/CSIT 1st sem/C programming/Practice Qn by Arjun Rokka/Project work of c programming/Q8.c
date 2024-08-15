/*Write a C program that asks the user to enter two numbers and then performs logical
operations on them using the following operators: && (logical AND), || (logical OR), ! (logical
NOT). Print the results of each operation to the console.*/

#include <stdio.h>
int main()
{
    printf("\n\n'Output of Question No. 8'\n\n");
    int num1, num2, and, or, left, right, xor;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("\n\nAnd=%d, or=%d, left=%d, right=%d, xor=%d, not=%d\n\n\n", num1 & num2, num1 | num2, num1 << 2, num1 >> 2, num1 ^ num2, ~num1);
    return 0;
}