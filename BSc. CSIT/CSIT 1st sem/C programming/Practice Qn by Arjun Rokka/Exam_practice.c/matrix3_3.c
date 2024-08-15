#include <stdio.h>
int matrix(int mat1[3], int mat[3]);
int main()
{
    int mat1[3][3], mat2[3][3];

    int i, j, sum = 0;
    printf("First matrix:\n");
    printf("Enter a matrix row and column: \n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("Enter %d row and %d column: ", i, j);

            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Second matrix:\n");
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            printf("Enter %d row and %d column: ", i, j);

            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {

            sum = mat1[i][j] + mat2[i][j];
            printf("%d\t", sum);
        }
        printf("\n");
    }

    return 0;
}