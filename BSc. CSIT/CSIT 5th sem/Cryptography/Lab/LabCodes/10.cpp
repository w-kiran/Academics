#include <stdio.h>

// Function to perform modular exponentiation (base^exp % mod)
long long modExp(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod; // In case base is greater than mod
    while (exp > 0) {
        if (exp % 2 == 1) {  // If exp is odd, multiply base with result
            result = (result * base) % mod;
        }
        base = (base * base) % mod;
        exp = exp / 2; // Divide exp by 2
    }
    return result;
}

int main() {
    long long p, g, a, b, A, B, secretKey1, secretKey2;
    printf("Implementation of Diffie-Hellman Key Exchange Algorithm.\n");

    // Input prime number p and base g
    printf("Enter prime number p: ");
    scanf("%lld", &p);
    printf("Enter base g: ");
    scanf("%lld", &g);

    // Party 1 selects private key a
    printf("\nParty 1: Select private key a: ");
    scanf("%lld", &a);

    // Party 2 selects private key b
    printf("\nParty 2: Select private key b: ");
    scanf("%lld", &b);

    // Compute public keys
    A = modExp(g, a, p);
    printf("\nParty 1 computes public key A = g^a mod p = %lld\n", A);

    B = modExp(g, b, p);
    printf("Party 2 computes public key B = g^b mod p = %lld\n", B);

    // Compute shared secret keys
    secretKey1 = modExp(B, a, p);
    printf("\nParty 1 computes shared secret key: secretKey1 = B^a mod p = %lld\n", secretKey1);

    secretKey2 = modExp(A, b, p);
    printf("Party 2 computes shared secret key: secretKey2 = A^b mod p = %lld\n", secretKey2);

    // Verify if both secret keys are the same
    if (secretKey1 == secretKey2) {
        printf("\nShared secret key successfully generated: %lld\n", secretKey1);
    } else {
        printf("\nError in key generation. The keys do not match.\n");
    }

    printf("Kiran Joshi Sukubhattu\n");
    return 0;
}

