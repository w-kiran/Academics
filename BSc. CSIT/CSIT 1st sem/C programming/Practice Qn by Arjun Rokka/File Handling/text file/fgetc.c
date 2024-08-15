#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr;
    char take;
    ptr = fopen("fputc.txt", "r");

    while (1)
    {
        take = getc(ptr);
        if (feof(ptr))
        {
            break;
        }
        printf("%c", take);
    }
    fclose(ptr);

    return 0;
}