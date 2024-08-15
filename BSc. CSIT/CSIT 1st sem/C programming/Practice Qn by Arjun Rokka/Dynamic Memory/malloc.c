/*
Syntax for malloc():
    datatype *ptr;
    ptr=(datatype *)malloc(size)

It is defined in stdlib header file.
*/

// Q1. take data from user and print out that data
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *prt, n, i, sum = 0;
    prt = (int *)malloc(5 * (sizeof(int)));
    for (i = 1; i <= 5; i++)
    {
        printf("Enter a number %d:  ", i);
        scanf("%d", &prt[i]);
    }

    for (i = 1; i <= 5; i++)
    {
        printf("%d\t", prt[i]);
    }
    free(prt);

}
*/

// Q2. read the number from user and sum it
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *mal, sum = 0, i;
    // taking input
    printf("Enter how many number do you want to sum: ");
    scanf("%d", &n);

    // dynamic memory malloc
    mal = (int *)malloc(n * sizeof(int));

    // taking input + calculation
    for (i = 1; i <= n; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &mal[i]);
        sum += mal[i];                      //another way
    }

    printf("Sum of numbers: %d", sum);
    free(mal);

    return 0;
}

*/

// Q3. read data from user and assign that data in dynamic memoery
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *mal, sum = 0, i;
    mal = (int *)malloc(5 * (sizeof(int)));
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value: ");
        scanf("%d", &n);
        printf("\n%d\n", *(mal + i) = n);
    }
    free(mal);
}

/*
// Q4. read the number from user and sum it
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, *mal, sum = 0, i;
    // taking input
    printf("Enter how many number do you want to sum: ");
    scanf("%d", &n);

    // dynamic memory malloc
    mal = (int *)malloc(n * sizeof(int));

    // taking input + calculation
    for (i = 1; i <= n; i++)
    {
        printf("Enter %d number: ", i);
        scanf("%d", &mal[i]);
        sum = sum + *(mal + i); // another way
    }

    printf("Sum of numbers: %d", sum);
    free(mal);

    return 0;
}
*/