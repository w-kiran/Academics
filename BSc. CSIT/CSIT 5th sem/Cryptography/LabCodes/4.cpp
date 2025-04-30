#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MOD 26
// Function to compute determinant of a 2x2 matrix
int determinant(int key[2][2]) {
    return (key[0][0] * key[1][1] - key[0][1] * key[1][0]);
}
// Function to compute modular inverse of a number under mod 26
int modInverse(int num) {
    num = num % MOD;
    for (int i = 1; i < MOD; i++)
        if ((num * i) % MOD == 1)
            return i;
    return -1;
}
// Function to compute the inverse of a 2x2 matrix mod 26
void inverseKey(int key[2][2], int invKey[2][2]) {
    int det = determinant(key);
    int detInv = modInverse(det);
    if (detInv == -1) {
        printf("Matrix is not invertible!\n");
        exit(1);
    }
    // Compute adjugate matrix
    invKey[0][0] = key[1][1];
    invKey[1][1] = key[0][0];
    invKey[0][1] = -key[0][1];
    invKey[1][0] = -key[1][0];
    // Multiply by modular inverse of determinant
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            invKey[i][j] = (invKey[i][j] * detInv) % MOD;
    // Ensure values are positive mod 26
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            if (invKey[i][j] < 0)
                invKey[i][j] += MOD;
}
// Function to encrypt using Hill Cipher
void encrypt(char plaintext[], int key[2][2]) {
    int len = strlen(plaintext);
    if (len % 2 != 0) {
        strcat(plaintext, "X"); // Padding if odd length
        len++;
    }
    printf("Encrypted Text: ");
    for (int i = 0; i < len; i += 2) {
        int P[2] = {plaintext[i] - 'A', plaintext[i+1] - 'A'};
        int C[2];
        // Matrix multiplication
        for (int j = 0; j < 2; j++)
            C[j] = (key[j][0] * P[0] + key[j][1] * P[1]) % MOD;
        printf("%c%c", C[0] + 'A', C[1] + 'A');
    }
    printf("\n");
}
// Function to decrypt using Hill Cipher
void decrypt(char ciphertext[], int key[2][2]) {
    int len = strlen(ciphertext);
    int invKey[2][2];
    // Compute inverse of key matrix
    inverseKey(key, invKey);
    printf("Decrypted Text: ");
    for (int i = 0; i < len; i += 2) {
        int C[2] = {ciphertext[i] - 'A', ciphertext[i+1] - 'A'};
        int P[2];
        // Matrix multiplication with inverse key
        for (int j = 0; j < 2; j++)
            P[j] = (invKey[j][0] * C[0] + invKey[j][1] * C[1]) % MOD;
        printf("%c%c", P[0] + 'A', P[1] + 'A');
    }
    printf("\n");
}
int main() {
    char plaintext[100];
    char ciphertext[100];
    int key[2][2];
    printf("Implementation of Hill Cipher\n");
    printf("Enter the 2x2 key matrix (mod 26):\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            scanf("%d", &key[i][j]);
    printf("Enter plaintext (uppercase, no spaces): ");
    scanf("%s", plaintext);
    encrypt(plaintext, key);
    printf("Enter the ciphertext for decryption: ");
    scanf("%s", ciphertext);
    decrypt(ciphertext, key);
    printf("\nKiran Joshi Sukubhattu");
    return 0;
}

