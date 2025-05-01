#include <stdio.h>
// Function to compute (base^exp) % mod using Modular Exponentiation
int powerMod(int base, int exp, int mod) {
    int result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) // If exp is odd, multiply base with result
            result = (result * base) % mod;
        base = (base * base) % mod; // Square the base
        exp /= 2;
    }
    return result;
}
// Function to find prime factors of (p-1)
int findFactors(int n, int factors[]) {
    int count = 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            factors[count++] = i;
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1) {
        factors[count++] = n;
    }
    return count;
}
// Function to find the smallest primitive root of prime p
int findPrimitiveRoot(int p) {
    int phi = p - 1; // Euler's Totient Function (p-1 for prime p)
    int factors[20];
    int numFactors = findFactors(phi, factors);
    for (int g = 2; g < p; g++) { // Start checking from 2
        int isPrimitive = 1;
        for (int i = 0; i < numFactors; i++) {
            if (powerMod(g, phi / factors[i], p) == 1) {
                isPrimitive = 0;
                break;
            }
        }
        if (isPrimitive)
            return g; // Found the smallest primitive root
    }
    return -1; // No primitive root found (shouldn't happen for prime p)
}

int main() {
    int p;
    printf("Primitive root:\n");
    printf("Enter a prime number: ");
    scanf("%d", &p);
    int root = findPrimitiveRoot(p);
    if (root != -1)
        printf("Smallest Primitive Root of %d is: %d\n", p, root);
    else
        printf("No primitive root found.\n");
    printf("Kiran Joshi Sukubhattu");
    return 0;
}

