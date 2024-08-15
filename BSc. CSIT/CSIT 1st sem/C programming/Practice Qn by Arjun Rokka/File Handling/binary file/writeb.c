// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     FILE *ptr = fopen("input.bin", "wb");
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     fwrite(&n, sizeof(int), 1, ptr);
//     fclose(ptr);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int num;
//     FILE *file_ptr;

//     printf("Enter an integer number: ");
//     scanf("%d", &num);

//     file_ptr = fopen("binaryfile.bin", "wb");
//     if (file_ptr == NULL) {
//         printf("Error opening file!\n");
//         return 1;
//     }

//     fwrite(&num, sizeof(num), 1, file_ptr);
//     fclose(file_ptr);

//     printf("Integer number written to binary file!\n");

//     return 0;
// }

#include <stdio.h>

int main()
{
    int num;
    FILE *file_ptr;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    file_ptr = fopen("binaryfile.bin", "wb");
    if (file_ptr == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    if (fwrite(&num, sizeof(num), 1, file_ptr) != 1)
    {
        printf("Error writing to file!\n");
        fclose(file_ptr);
        return 1;
    }

    fclose(file_ptr);
    printf("Integer number written to binary file!\n");

    return 0;
}
