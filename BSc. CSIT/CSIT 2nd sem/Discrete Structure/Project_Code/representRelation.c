// Programs for representing relations.
#include <stdio.h>

void represent_graph(int nrow, int ncol, int array[nrow][ncol]);

int main(void)
{
    int array[4][2] = {{1, 1}, {2, 4}, {3, 9}, {4, 16}};
    int nrow = sizeof(array) / sizeof(array[0]);
    int ncol = sizeof(array[0]) / sizeof(array[0][0]);

    represent_graph(nrow, ncol, array);

    return 0;
}

void represent_graph(int nrow, int ncol, int array[nrow][ncol])
{
    printf("{ ");
    for (int i = 0; i < nrow; i++)
    {
        putchar('(');
        for (int j = 0; j < ncol; j++)
        {
            printf("%d", array[i][j]);
            if (j < ncol - 1)
                printf(", ");
        }
        putchar(')');
        if (i < nrow - 1)
            printf(", ");
    }
    printf(" }\n");
}