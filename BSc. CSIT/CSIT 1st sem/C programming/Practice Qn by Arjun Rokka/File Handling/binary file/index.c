// #include <stdio.h>

// #include <stdio.h>
// int main()
// {
//     int num;
//     FILE *file_ptr;

//     printf("Enter an integer number: ");
//     scanf("%d", &num);

//     file_ptr = fopen("binaryfile.bin", "wb");
//     if (file_ptr == NULL)
//     {
//         printf("Error opening file!");
//         return 1;
//     }

//     fwrite(&num, sizeof(num), 1, file_ptr);
//     fclose(file_ptr);

//     printf("Integer number written to binary file!");

//     file_ptr = fopen("binaryfile.bin", "rb");
//     int n = -1;
//     fread(&n, sizeof(n), 1, file_ptr);
//     printf("num=%d", n);

//     fclose(file_ptr);
// }

#include <stdio.h>

int main()
{
    int num;
    FILE *file_ptr;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    file_ptr = fopen("abinaryfile.bin", "wb");
    if (file_ptr == NULL)
    {
        printf("Error opening file!");
        return 1;
    }

    fwrite(&num, sizeof(num), 1, file_ptr);
    fclose(file_ptr);

    printf("Integer number written to binary file!");

    file_ptr = fopen("abinaryfile.bin", "rb");
    int n = -1;
    fread(&n, sizeof(n), 1, file_ptr);
    printf("\num=%d", n);

    fclose(file_ptr);

    return 0;
}