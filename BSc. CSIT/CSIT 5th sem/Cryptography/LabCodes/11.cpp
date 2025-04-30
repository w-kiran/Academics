#include <stdio.h>
// Function to compute GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;  // Update b with the remainder of a divided by b
        a = temp;   // Update a to b (old value)
    }
    return a;  // When b becomes 0, a will hold the GCD
}
int main() {
    int a, b;
    printf("Euclidean Algorithm\n");
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    // Compute GCD
    int result = gcd(a, b);
    // Output the result
    printf("GCD of %d and %d is: %d\n", a, b, result);
    printf("Kiran Joshi Sukubhattu");
    return 0;
}

