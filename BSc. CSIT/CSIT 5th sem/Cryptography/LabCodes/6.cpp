#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
// Function to generate a random key
void generateKey(char plaintext[], char key[]) {
    int len = strlen(plaintext);
    for (int i = 0; i < len; i++) {
        key[i] = 'A' + (rand() % 26); // Generate a random uppercase letter
    }
    key[len] = '\0'; // Null-terminate the key
}
// Function to encrypt using OTP Cipher
void encryptOTP(char plaintext[], char key[], char ciphertext[]) {
    int len = strlen(plaintext);
    for (int i = 0; i < len; i++) {
        ciphertext[i] = ((plaintext[i] - 'A') ^ (key[i] - 'A')) + 'A';
    }
    ciphertext[len] = '\0'; // Null-terminate the ciphertext
}
// Function to decrypt using OTP Cipher
void decryptOTP(char ciphertext[], char key[], char decryptedText[]) {
    int len = strlen(ciphertext);
    for (int i = 0; i < len; i++) {
        decryptedText[i] = ((ciphertext[i] - 'A') ^ (key[i] - 'A')) + 'A';
    }
    decryptedText[len] = '\0'; // Null-terminate the decrypted text
}
int main() {
    char plaintext[100], key[100], ciphertext[100], decryptedText[100];
    printf("Implementaion of OTP Cipher\n");
    // Seed the random number generator
    srand(time(0));
    // Input plaintext
    printf("Enter plaintext (uppercase, no spaces): ");
    scanf("%s", plaintext);
    // Generate a truly random key
    generateKey(plaintext, key);
    printf("Generated Key: %s\n", key);
    // Encrypt
    encryptOTP(plaintext, key, ciphertext);
    printf("Encrypted Text: %s\n", ciphertext);
    // Decrypt
    decryptOTP(ciphertext, key, decryptedText);
    printf("Decrypted Text: %s\n", decryptedText);
    printf("Kiran Joshi Sukubhattu");
    return 0;
}

