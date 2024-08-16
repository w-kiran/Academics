#include <stdio.h>

int binaryproduct(int binary1, int binary2);
int binaryDivision(int dividend, int divisor);

int main()
{
    // addition
    long binary1, binary2;
    int i = 0, remainder = 0, sum[20];

    printf("Enter the first binary number for addition: ");
    scanf("%ld", &binary1);
    printf("Enter the second binary number for addition: ");
    scanf("%ld", &binary2);
    int dividend = binary1, divisor = binary2;
    long binary3 = binary1, binary4 = binary2, multiply = 0;

    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
    {
        sum[i++] = remainder;
    }
    --i;
    // displaying sum of two binary numbers.
    printf("Sum of two binary numbers: ");
    while (i >= 0)
    {
        printf("%d", sum[i--]);
    }

    // multiplication

    int digit, factor = 1;
    while (binary4 != 0)
    {
        digit = binary4 % 10;
        if (digit == 1)
        {
            binary3 = binary3 * factor;
            multiply = binaryproduct(binary3, multiply);
        }
        else
        {
            binary3 = binary3 * factor;
        }
        binary4 = binary4 / 10;
        factor = 10;
    }
    printf("\nProduct of two binary numbers: %ld\n", multiply);

    // Division

    int result = binaryDivision(dividend, divisor);

    if (result != -1)
    {
        printf("Quotient: %d\n", result);
    }
    return 0;
}

int binaryproduct(int binary1, int binary2)
{
    int i = 0, remainder = 0, sum[20];
    int binaryprod = 0;

    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] = (binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder = (binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}

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
        remainder <<= 1;
        remainder |= (dividend >> i) & 1;

        if (remainder >= divisor)
        {
            remainder -= divisor;
            quotient |= (1 << i);
        }
    }

    return quotient;
}