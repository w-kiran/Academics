#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true;
    if (num % 2 == 0)
        return false;
    int limit = sqrt(num);
    for (int i = 3; i <= limit; i += 2)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    FILE *inputFile = fopen("Num.txt", "r");
    FILE *outputFile = fopen("Prime.txt", "w");

    if (inputFile == NULL || outputFile == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    int num;
    while (fscanf(inputFile, "%d", &num) != EOF)
    {
        if (isPrime(num))
        {
            fprintf(outputFile, "%d\n", num);
            printf("%d\n", num);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Prime numbers extracted and written to Prime.txt.\n");

    return 0;
}