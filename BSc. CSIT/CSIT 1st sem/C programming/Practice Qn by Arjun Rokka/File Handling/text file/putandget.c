#include <stdio.h>
int main()
{
    int ch;
    FILE *ptrw;
    FILE *ptr_wa;
    ptrw = fopen("putInput.txt", "r");
    ptr_wa = fopen("putoutput.txt", "w");

    while (1)
    {
        ch = fgetc(ptrw);
        if (feof(ptrw))
        {
            break;
        }
        fputc(ch, ptr_wa);
    }

    fclose(ptr_wa);
    fclose(ptrw);
}
