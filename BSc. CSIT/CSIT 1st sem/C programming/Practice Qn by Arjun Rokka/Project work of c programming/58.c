#include <stdio.h>

int main()
{
    FILE *fp;
    int data[5];

    fp = fopen("binary_file.bin", "rb");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\n\n\n\n");

    fread(data, sizeof(int), sizeof(data) / sizeof(int), fp);

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n\n\n\n");
    fclose(fp);

    return 0;
}
