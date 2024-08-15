#include <stdio.h>
// defining and declaring
int isprime(int n)
{
    int i;
    for (i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        if (isprime(i))
        {
            printf("%d ", i);
        }
    }
}