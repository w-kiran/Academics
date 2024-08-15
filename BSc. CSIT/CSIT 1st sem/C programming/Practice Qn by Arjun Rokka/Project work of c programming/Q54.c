#include <stdio.h>
int main()
{
    FILE *new = fopen("New.txt", "r");
    char str[50];
    int num;
    printf("\n\n\n");

    while (fscanf(new, "%s %d", &str, &num) != EOF)
    {
        printf("%s\t%d\n", str, num);
    }
    printf("\n\n\n\n\n\n\n");
    fclose(new);
    return 0;
}