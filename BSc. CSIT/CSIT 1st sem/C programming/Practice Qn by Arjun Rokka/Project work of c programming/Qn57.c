#include <stdio.h>

int main()
{
    FILE *file_pointer;
    int data[] = {1, 2, 3, 4, 5};

    file_pointer = fopen("binary_file.bin", "wb");

    if (file_pointer == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    printf("\n\n");
    fwrite(data, sizeof(int), sizeof(data) / sizeof(int), file_pointer);

    printf("Data written successfully to binary file!\n");
    printf("\n\n");

    fclose(file_pointer);

    return 0;
}
