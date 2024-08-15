// #include <stdio.h>
// int power(int n, int p)
// {
//     if (n == 0)
//         return 0;
//     else
//         return (n + n * (p - 1));
// }
// int main()
// {
//     int n, p;
//     printf("Enter a number and power: ");
//     scanf("%d %d", &n, &p);
//     printf("Power = %d", power(n, p));
// }

#include <stdio.h>
int power(int n, int p)
{
    if (p == 0)
        return 1;
    else
        return (n * power(n, p - 1));
}
int main()
{
    int n, p;
    printf("Enter a number and power: ");
    scanf("%d %d", &n, &p);
    printf("Power = %d", power(n, p));
}