#include <stdio.h>
int mult(int num1, int num2)
{
    if (num1 == 0)
        return 0;
    else
        return num1 * num2;
}

int main()
{
    int n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    printf("Multiplication of two numbers is %d", mult(n1, n2));
}