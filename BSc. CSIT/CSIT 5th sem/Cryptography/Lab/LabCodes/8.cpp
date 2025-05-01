#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// Function to compute gcd (Greatest Common Divisor)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
// Function to compute modular exponentiation (base^exp % mod)
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) // If exp is odd, multiply base with result
            result = (result * base) % mod;
        base = (base * base) % mod; // Square the base
        exp /= 2;
    }
    return result;
}
// Function to compute modular inverse (d = e^(-1) mod phi)
int modInverse(int e, int phi) {
    for (int d = 2; d < phi; d++) {
        if ((d * e) % phi == 1)
            return d;
    }
    return -1; // No modular inverse found
}
int main() {
    int p, q, n, phi, e, d, message, encrypted, decrypted;
    printf("RSA Implementation:\n");
    // Step 1: Input two prime numbers p and q
    printf("Enter two prime numbers (p and q): ");
    scanf("%d %d", &p, &q);
    // Step 2: Compute n and Euler's Totient function phi(n)
    n = p * q;
    phi = (p - 1) * (q - 1);
    // Step 3: Choose an encryption exponent e (1 < e < phi, and gcd(e, phi) = 1)
    for (e = 2; e < phi; e++) {
        if (gcd(e, phi) == 1)
            break;
    }
   // Step 4: Compute the decryption exponent d
    d = modInverse(e, phi);
    if (d == -1) {
        printf("Error finding modular inverse.\n");
        return 1;
    }
    // Display the generated keys
    printf("\nPublic Key: (e = %d, n = %d)\n", e, n);
    printf("Private Key: (d = %d, n = %d)\n", d, n);
    printf("\nEnter the message (integer format): ");
    scanf("%d", &message);
    encrypted = modExp(message, e, n);
    printf("Encrypted Message: %d\n", encrypted);
    decrypted = modExp(encrypted, d, n);
    printf("Decrypted Message: %d\n", decrypted);
    printf("Kiran Joshi Sukubhattu\n");
    return 0;
}

