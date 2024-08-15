// performs add,sub,mul,div and mod

#include <stdio.h>
int main()
{
    printf("\n\n                  Operators and Expressions\n\n");
    printf("\n\n'Output of Question No. 5'");
    // printf("\n\n.....Program By Arjun Mijar.....\n\n\n");
    printf("\n\n------Bishnu Chalsie-------\n\n\n");

    int a, b;
    printf("Enter two numbers = ");
    scanf("%d %d", &a, &b);
    printf("\n\nAddition = %d,\tSubtraction = %d, \tMultiplication = %d, \tDivision =%d, \tModulus = %d\n\n\n", a + b, a - b, a * b, a / b, a % b);
    return 0;
}