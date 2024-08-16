#include <stdio.h>

// Function to perform fuzzy set union
void fuzzyUnion(double A[], double B[], double result[], int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = (A[i] > B[i]) ? A[i] : B[i];
    }
}

// Function to perform fuzzy set intersection
void fuzzyIntersection(double A[], double B[], double result[], int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = (A[i] < B[i]) ? A[i] : B[i];
    }
}

// Function to perform fuzzy set complement
void fuzzyComplement(double A[], double result[], int size)
{
    for (int i = 0; i < size; i++)
    {
        result[i] = 1.0 - A[i];
    }
}

// Function to display a fuzzy set
void displayFuzzySet(double set[], int size)
{
    printf("{ ");
    for (int i = 0; i < size; i++)
    {
        printf("%.2f", set[i]);
        if (i < size - 1)
        {
            printf(", ");
        }
    }
    printf(" }\n");
}

int main()
{
    int size = 5; // Number of elements in the fuzzy sets

    double A[] = {0.2, 0.4, 0.6, 0.8, 1.0}; // Fuzzy set A
    double B[] = {0.5, 0.2, 0.7, 0.3, 0.9}; // Fuzzy set B
    double result[size];                    // To store the result of operations

    printf("Fuzzy Set A: ");
    displayFuzzySet(A, size);

    printf("Fuzzy Set B: ");
    displayFuzzySet(B, size);

    fuzzyUnion(A, B, result, size);
    printf("Union of A and B: ");
    displayFuzzySet(result, size);

    fuzzyIntersection(A, B, result, size);
    printf("Intersection of A and B: ");
    displayFuzzySet(result, size);

    fuzzyComplement(A, result, size);
    printf("Complement of A: ");
    displayFuzzySet(result, size);

    return 0;
}
