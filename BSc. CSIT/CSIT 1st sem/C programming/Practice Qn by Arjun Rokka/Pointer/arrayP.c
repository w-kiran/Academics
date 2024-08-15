#include <stdio.h>
int main()
{
    int arr[20], num, i, **point = 0;

    printf("Eter the number of array :");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("Elements of array: ");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < num; i++)
    {
        point += *(arr + i);
    }
    printf("Sum of array: %d", point);
}