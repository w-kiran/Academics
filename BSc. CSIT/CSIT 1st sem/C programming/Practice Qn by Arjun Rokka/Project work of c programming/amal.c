#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = (int *)malloc(5 * sizeof(int));
    int i;
    printf("Enter a number using malloc: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", ptr[i]);
    }

    ptr = realloc(ptr, 10 * sizeof(int));

    printf("\n\nEnter a new number: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }

    int *cal = (int *)calloc(5, sizeof(int));
    printf("\nEnter a number using calloc: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &cal[i]);
    }

    for (i = 0; i < 5; i++)
    {
        printf("%d ", cal[i]);
    }

    free(ptr);
    free(cal);
}