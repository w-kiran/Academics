#include <stdio.h>
int main()
{
    int mat[2][3];
    int i, j;
    printf("Enter the row and column of a matrix: ");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d\t", mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}