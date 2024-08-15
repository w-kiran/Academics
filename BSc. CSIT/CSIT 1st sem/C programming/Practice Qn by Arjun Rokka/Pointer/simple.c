
#include <stdio.h>
int main()
{
    int *ptr, num = 6;
    ptr = &num;
    printf("%d\n", *ptr);
    printf("%d\n", ptr);
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr + i);
    }
}