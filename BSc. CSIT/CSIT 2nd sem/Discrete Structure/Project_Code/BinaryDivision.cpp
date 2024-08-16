#include <stdio.h>

// Function to perform binary integer division
int binaryDivision(int dividend, int divisor)
{
    // Handle division by zero
    if (divisor == 0)
    {
        printf("Error: Division by zero\n");
        return -1; // You can choose an appropriate error code
    }

    // Initialize the quotient and remainder to 0
    int quotient = 0;
    int remainder = 0;

    // Perform binary division
    for (int i = 31; i >= 0; i--)
    {
        remainder <<= 1;                  // Left shift remainder by 1
        remainder |= (dividend >> i) & 1; // Set the LSB of remainder to the current bit of dividend

        if (remainder >= divisor)
        {
            remainder -= divisor; // Subtract divisor from remainder
            quotient |= (1 << i); // Set the current bit of quotient to 1
        }
    }

    return quotient;
}

int main()
{
    int dividend, divisor;

    printf("Enter dividend: ");
    scanf("%d", &dividend);

    printf("Enter divisor: ");
    scanf("%d", &divisor);

    int result = binaryDivision(dividend, divisor);

    if (result != -1)
    {
        printf("Quotient: %d\n", result);
    }

    return 0;
}
