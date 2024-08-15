#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *num = fopen("num.txt", "w");
    int i;
    for (i = 1; i <= 100; i++)
    {
        fprintf(num, "%d\t", i);
    }
}

