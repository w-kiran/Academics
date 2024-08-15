#include <stdio.h>
// void print(int *n)
// {
//     printf("%d ", *n);
// }
// int main()
// {
//     int *ptr, a = 10;
//     ptr = &a;
//     print(ptr);
//     return 0;
// }

void cube(int *a, int *b)
{
    *a = (*a) * (*a) * (*a);
    *b = (*b) + (*a);
}

int main()
{
    int n = 2;
    int m = 10;
    printf("before: %d\n", n);

    cube(&n, &m);
    printf("after: %d", n);

    printf("\nSum = %d", m);
}