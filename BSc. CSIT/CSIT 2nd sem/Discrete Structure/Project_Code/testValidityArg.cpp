#include <stdio.h>
#include <stdbool.h> // For using boolean data type

// Function to evaluate a logical expression
bool evaluate(int a, int b, int c)
{
    // Change the logical expression here (premises and conclusion)
    bool premise1 = a || b;
    bool premise2 = !b;
    bool conclusion = c;

    // Check if all premises are true and the conclusion is false
    return premise1 && premise2 && !conclusion;
}

int main()
{
    printf("Truth Table for Testing Argument Validity:\n");

    // Print table header with variable names
    printf("Premise 1\tPremise 2\tConclusion\tValid?\n");

    // Calculate the total number of rows in the truth table (2^3 for three variables)
    int numRows = 1 << 3; // Three variables: a, b, c

    // Generate and print the truth table
    for (int row = 0; row < numRows; row++)
    {
        int a = (row >> 2) & 1;
        int b = (row >> 1) & 1;
        int c = row & 1;

        bool valid = evaluate(a, b, c);

        printf("%d\t\t%d\t\t%d\t\t%s\n", a, b, c, valid ? "true" : "false");
    }

    return 0;
}
