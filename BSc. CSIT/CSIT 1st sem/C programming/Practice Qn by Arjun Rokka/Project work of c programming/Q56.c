#include <stdio.h>

int main()
{
    FILE *source_file, *destination_file;
    char ch;

    source_file = fopen("source.txt", "r");
    destination_file = fopen("destination.txt", "w");

    if (source_file == NULL || destination_file == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }
    
    while ((ch = fgetc(source_file)) != EOF)
    {
        fputc(ch, destination_file);
    }

    printf("File copied successfully!\n");

    fclose(source_file);
    fclose(destination_file);

    return 0;
}
