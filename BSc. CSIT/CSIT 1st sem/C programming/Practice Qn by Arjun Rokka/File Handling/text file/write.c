/*
File operations:
1. Create
2. Open
3. Read or Write
4.Close


// Modes
Write: w
read: r
add: a
syntax: FILE *ptr;

*/

// WAP to read data from user and write to the file
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, i;
    FILE *ptr;
    ptr = fopen("input.txt", "w");
    if (ptr == NULL)
    {
        printf("File Error !");
        exit(1);
    }
    fprintf(ptr, "Entered number:\n ");
    for (i = 1; i < 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        fprintf(ptr, "%d\t", n);
        printf("\n%d\t\n", n);
    }
    return 0;
}