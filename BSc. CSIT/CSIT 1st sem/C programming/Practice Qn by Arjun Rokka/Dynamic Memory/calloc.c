/*
syntax for calloc:
    datatype *pointer;
    pointer=(datatype *)calloc(no. of block, size);

*/
/*
// Take data from user and print it out
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *cal, n, i;
    printf("Enter how many number: ");
    scanf("%d", &n);
    cal = (int *)calloc(n, sizeof(int));
    for (i = 1; i <= n; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &cal[i]);
        printf("\n=> %d\n", cal[i]);
    }
    free(cal);
}

*/

// take data and performs addition,multiply
#include <stdlib.h>
#include <stdio.h>
int main()
{
    int *cal, n, i, sum = 0, mul = 1;
    printf("Enter how many number: ");
    scanf("%d", &n);
    cal = (int *)calloc(n, sizeof(int));
    for (i = 1; i <= n; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &cal[i]);
        sum += *(cal + i);
        mul *= cal[i];
    }
    printf("\n=> %d\n", sum);
    printf("\n=> %d\n", mul);

    free(cal);
}
