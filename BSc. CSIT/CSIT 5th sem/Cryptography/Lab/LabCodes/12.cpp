#include <stdio.h>
int extendedGCD(int a, int b, int *x, int *y) {
    if (b == 0) {
        *x = 1; // Base case: x = 1, y = 0
        *y = 0;
        return a; // GCD is a
    }
    int x1, y1;
    int gcd = extendedGCD(b, a % b, &x1, &y1);
    // Update x and y using the results of the previous call
    *x = y1;
    *y = x1 - (a / b) * y1;
    return gcd;
}
int main() {
    int a, b, x, y;
    printf("Extended Euclidean Algorithm:\n");
    // Input the two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Call the extended Euclidean algorithm
    int gcd = extendedGCD(a, b, &x, &y);
    // Output the results
    printf("GCD of %d and %d is: %d\n", a, b, gcd);
    printf("Coefficients x and y are: %d, %d\n", x, y);
    printf("Equation: %d * %d + %d * %d = %d\n", a, x, b, y, gcd);
    printf("Kiran Joshi Sukubhattu");
    return 0;
} 

