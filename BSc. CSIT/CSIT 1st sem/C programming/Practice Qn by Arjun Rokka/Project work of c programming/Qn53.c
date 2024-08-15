#include <stdio.h>
int main()
{
    FILE *new = fopen("New.txt", "w");
    char str[50];
    printf("\n\nEnter some text : ");
    scanf("%[^\n]", str);
    printf("\n\n\n");
    fprintf(new, "%s", str);
    fclose(new);
    return 0;
}