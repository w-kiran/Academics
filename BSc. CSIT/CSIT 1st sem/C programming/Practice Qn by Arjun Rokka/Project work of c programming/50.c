#include <stdio.h>
int main()
{
    int arr[] = {2, 4, 6, 8, 10};
    int *pr;
    printf("Iterate: ");
    for (pr = arr; pr < arr + 5; pr++)
    {
        printf("%d ", *pr);
    }
}