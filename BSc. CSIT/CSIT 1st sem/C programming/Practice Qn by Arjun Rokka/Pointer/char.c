#include <stdio.h>
int main()
{
    char stre[20] = "Hello";
    int i = 0;
    while (stre[i] != '\0')
    {
        int *pow;
        pow = stre;
        printf("Memory Location %d \n", *pow + i);
        i++;
    }
}