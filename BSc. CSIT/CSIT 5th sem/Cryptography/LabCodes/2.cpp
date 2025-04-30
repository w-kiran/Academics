#include <stdio.h>
#include <string.h>
// Function to encrypt text using shift cipher
void encrypt(int shift) {
    char text[100];
    printf("Enter the text to encrypt: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // Remove newline character
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            text[i] = (ch - 'A' + shift) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            text[i] = (ch - 'a' + shift) % 26 + 'a';
        }
    }
    printf("Encrypted text: %s\n", text);
}
// Function to decrypt text using shift cipher
void decrypt(int shift) {
    char text[100];
    printf("Enter the text to decrypt: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // Remove newline character   
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'A' && ch <= 'Z') {
            text[i] = (ch - 'A' - shift + 26) % 26 + 'A';
        } else if (ch >= 'a' && ch <= 'z') {
            text[i] = (ch - 'a' - shift + 26) % 26 + 'a';
        }
    }
    printf("Decrypted text: %s\n", text);
}
int main() {
    int shift, choice;
    printf("Shift Cipher\n");
    printf("Enter the shift value: ");
    scanf("%d", &shift);
    getchar(); // Consume newline character
    printf("Choose an option:\n1. Encrypt\n2. Decrypt\nEnter your choice: ");
    scanf("%d", &choice);
    getchar(); // Consume newline character
    if (choice == 1) {
        encrypt(shift);
    } else if (choice == 2) {
        decrypt(shift);
    } else {
        printf("Invalid choice!\n");  }
    printf("Kiran Joshi Sukubhattu");
    return 0;
}

