
#include <stdio.h>

int main()
{
    int i, j;
    int arr[3][4] = {{0, 1, 3, 5}, {2, 4, 6, 7}, {5, 9, 11, 13}};
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}