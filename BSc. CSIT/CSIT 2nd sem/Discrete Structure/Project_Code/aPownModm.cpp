#include <stdio.h>

// Recursive function to compute a^n % m
int powerMod(int a, int n, int m)
{
    if (n == 0)
    {
        return 1;
    }
    int temp = powerMod(a, n / 2, m);
    int result = (temp * temp) % m;
    if (n % 2 == 1)
    {
        result = (result * a) % m;
    }
    return result;
}

int main()
{
    int a, n, m;

    printf("Enter the values of a, n, and m: ");
    scanf("%d %d %d", &a, &n, &m);

    int result = powerMod(a, n, m);
    printf("%d^%d %% %d = %d\n", a, n, m, result);

    return 0;
}
