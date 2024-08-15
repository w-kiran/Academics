/*
syntax for realloc():
    datatype *ptr
    ptr=(datatype *)realloc(ptr,size)

*/

/*
// realloc through calloc
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr, i, sum = 0, mul = 1;

    ptr = (int *)calloc(5, sizeof(int));
    for (i = 1; i <= 5; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &ptr[i]);
        sum += *(ptr + i);
    }
    printf("Sum of number before realloc, sum = %d\n", sum);

    // realloc
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (i = 1; i <= 10; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &ptr[i]);
        sum += *(ptr + i);
    }
    printf("Sum of number after realloc, sum = %d", sum);
}
*/

// realloc through malloc
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *ptr, i, sum = 0, mul = 1;

    ptr = (int *)malloc(5 * sizeof(int));
    for (i = 1; i <= 5; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &ptr[i]);
        sum += *(ptr + i);
    }
    printf("Sum of number before realloc, sum = %d\n", sum);

    // realloc
    ptr = (int *)realloc(ptr, 10 * sizeof(int));
    for (i = 1; i <= 10; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &ptr[i]);
        sum += *(ptr + i);
    }
    printf("Sum of number after realloc, sum = %d", sum);
}