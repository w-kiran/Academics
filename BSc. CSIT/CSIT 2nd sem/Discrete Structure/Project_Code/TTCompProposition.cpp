//Programs to generate truth tables of compound propositions. 
#include <stdio.h>
#include <stdbool.h> // For using boolean data type

// Function to evaluate a compound proposition
bool evaluate(int a, int b)
{
    // Change the logical expression here
    return (a && b); // Example: a AND b
}

int main()
{
    int numVariables = 2; // Number of input variables (change as needed)

    printf("Truth Table for a Compound Proposition:\n");

    // Print table header with variable names
    for (int i = 0; i < numVariables; i++)
    {
        printf("Var%d\t", i + 1);
    }
    printf("Result\n");

    // Calculate the total number of rows in the truth table (2^numVariables)
    int numRows = 1 << numVariables;

    // Generate and print the truth table
    for (int row = 0; row < numRows; row++)
    {
        for (int var = 0; var < numVariables; var++)
        {
            // Use bitwise AND to check the value of the variable
            int value = (row >> var) & 1;
            printf("%d\t", value);
        }

        // Evaluate the compound proposition and print the result
        bool result = evaluate((row >> 0) & 1, (row >> 1) & 1); // Example: a AND b
        printf("%d\n", result);
    }

    return 0;
}
