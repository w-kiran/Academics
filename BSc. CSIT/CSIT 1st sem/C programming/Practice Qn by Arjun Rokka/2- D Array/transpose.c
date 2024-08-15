#include <stdio.h>
int main()
{
    int mat1[10][10], mat2[10][10], row, col, i, j;
    printf("Enter the number of row and column: ");
    scanf("%d %d", &row, &col);

    // taking an input
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Enter %d row and %d column: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // displaying
    printf("\nDisplaying a sum of two matrices:\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d\t", mat1[j][i]);
        }
        printf("\n");
    }
}