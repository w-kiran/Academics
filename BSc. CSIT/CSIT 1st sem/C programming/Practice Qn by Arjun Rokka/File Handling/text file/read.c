#include <stdio.h>
#include <stdlib.h>
int main()
{

    FILE *read;
    char buf[100];
    int n;
    read = fopen("input.txt", "r");
    if (read == NULL)
    {
        printf("File Error");
        exit(1);
    }

    // while (fscanf(read, "%*s %*s %s ", buf) != EOF)
    // {
    //     printf("%s\n", read);
    // }

    while (fscanf(read, "%s %d", buf, &n) == 1)
    {
        printf("%s %d", buf, n);
        printf("\t");
    }
    fclose(read);

    return 0;
}