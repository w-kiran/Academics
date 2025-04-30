#include <stdio.h> 
#include <string.h>
#define MAX 100
// Function to encrypt using Rail Fence Cipher
void encryptRailFence(char text[], int rails) {
    char rail[rails][MAX]; 
    int len = strlen(text), row = 0, dir = 1;
    // Initialize rail matrix
    for (int i = 0; i < rails; i++)
        for (int j = 0; j < len; j++)
            rail[i][j] = '\n';
    // Fill matrix in zigzag pattern
    for (int i = 0; i < len; i++) {
        rail[row][i] = text[i];
        row += dir;
        if (row == 0 || row == rails - 1) 
            dir *= -1;
    }
    // Read matrix row-wise for ciphertext
    printf("Encrypted Text: ");
    for (int i = 0; i < rails; i++)
        for (int j = 0; j < len; j++)
            if (rail[i][j] != '\n')
                printf("%c", rail[i][j]);
    printf("\n");
}
// Function to decrypt using Rail Fence Cipher
void decryptRailFence(char cipher[], int rails) {
    char rail[rails][MAX];
    int len = strlen(cipher), row = 0, dir = 1, index = 0;
    // Initialize rail matrix
    for (int i = 0; i < rails; i++)
        for (int j = 0; j < len; j++)
            rail[i][j] = '\n';
    // Mark zigzag pattern positions
    for (int i = 0; i < len; i++) {
        rail[row][i] = '*';
        row += dir;
        if (row == 0 || row == rails - 1)
            dir *= -1;
    }
    // Fill matrix with ciphertext
    for (int i = 0; i < rails; i++)
        for (int j = 0; j < len; j++)
            if (rail[i][j] == '*' && index < len)
                rail[i][j] = cipher[index++];
    // Read matrix in zigzag order to reconstruct the plaintext
    row = 0, dir = 1;
    printf("Decrypted Text: ");
    for (int i = 0; i < len; i++) {
        printf("%c", rail[row][i]);
        row += dir;
        if (row == 0 || row == rails - 1)
            dir *= -1;
    }
    printf("\n");
}
int main() {
    char message[MAX];
    int rails;
    printf("\nImplementation Of Rail Fence\n");
    printf("Enter the message: ");
    scanf("%s", message);
    printf("Enter the number of rails: ");
    scanf("%d", &rails);
    encryptRailFence(message, rails);
    char cipher[MAX];
    printf("\nEnter the encrypted text for decryption: ");
    scanf("%s", cipher);
    decryptRailFence(cipher, rails);
    printf("\nKiran Joshi Sukubhattu");
    return 0;
}

