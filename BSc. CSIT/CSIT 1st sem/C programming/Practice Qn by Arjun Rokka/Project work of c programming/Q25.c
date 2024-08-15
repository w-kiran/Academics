#include <stdio.h>
int main()
{
    int i = 1, n;
    do
    {
        printf("You looking handsome !!\n");
        printf("Do you want again to run this code :");
        scanf("%d", &n);
    } while (n <= 10);
}