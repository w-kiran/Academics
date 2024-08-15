#include <stdio.h>
#include <stdlib.h>
// fputc take only one character at a time

int main()
{
    FILE *ptr;
    int letter;
    ptr = fopen("fputc.txt", "w");
    // For writing in fputc.txt file
    for (letter = 65; letter < 91; letter++)
    {
        fputc(letter, ptr);
    }
    fclose(ptr);
    return 0;
}