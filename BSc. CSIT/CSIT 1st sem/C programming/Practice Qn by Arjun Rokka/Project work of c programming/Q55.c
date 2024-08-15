#include <stdio.h>
int main()
{
    FILE *new = fopen("text.txt", "a");
    char str[50];
    printf("\n\n\n");
    printf("Entre some text = ");
    scanf("%[^\n]", str);
    fprintf(new, "%s", str);

    printf("\n\n\n\n\n\n\n");
    fclose(new);
    return 0;
}