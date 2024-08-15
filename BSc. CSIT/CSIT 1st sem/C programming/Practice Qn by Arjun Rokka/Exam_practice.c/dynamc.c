#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *ptr = (int *)malloc(5 * sizeof(int));
    int i;
    printf("\nEnter number upto 5 malloc : ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }
    printf("\nEnter number upto 10 realloc : ");

    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < 8; i++)
    {
        printf("%d ", ptr[i]);
    }
    free(ptr);

    printf("\nEnter number upto 5 calloc : ");
    int *pptr = (int *)calloc(5, sizeof(int));
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &pptr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", pptr[i]);
    }
    free(pptr);
}