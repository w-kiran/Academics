// enter two number and compares them using ==,!=, >,<,>=,<= and print result
#include <stdio.h>
int main()
{
    printf("\n\n'Output of Question No. 6'\n\n");
    int num1, num2;
    printf("Enter two numbers = ");
    scanf("%d%d", &num1, &num2);
    printf("\n\n");
    if (num1 == num2)
    {
        printf("%d is equal to %d\n\n", num1, num2);
    }

    if (num1 != num2)
    {
        printf("%d is not equal to  %d \n\n", num1, num2);
    }
    if (num1 > num2)
    {
        printf(" %d is greter than  %d \n\n", num1, num2);
    }
    if (num1 < num2)
    {
        printf("%d is smaller than  %d \n\n", num1, num2);
    }
    if (num1 >= num2)
    {
        printf("%d is greter than or equal to %d\n\n", num1, num2);
    }
    if (num1 <= num2)
    {
        printf("%d is Smaller than or equal to %d\n\n", num1, num2);
    }

    return 0;
}