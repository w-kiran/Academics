#include <stdio.h>
#include <string.h>
#include <ctype.h>
// 5x5 Playfair key matrix
char keyMatrix[5][5];
// Function to check if a character is already in the matrix
int isCharInMatrix(char c) {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (keyMatrix[i][j] == c)
                return 1;
    return 0;
}
// Function to generate the Playfair key matrix
void generateKeyMatrix(char key[]) {
    char tempKey[26] = {0}; // Store unique letters
    int index = 0;
    // Convert key to uppercase and remove duplicates
    for (int i = 0; key[i] != '\0'; i++) {
        char c = toupper(key[i]);
        if (c == 'J') c = 'I'; // Treat I and J as the same
        if (!isCharInMatrix(c) && isalpha(c)) {
            tempKey[index++] = c;
        }
    }
    // Fill matrix with unique letters of the key
    int x = 0, y = 0;
    for (int i = 0; i < index; i++) {
        keyMatrix[x][y++] = tempKey[i];
        if (y == 5) { x++; y = 0; }
    }
    // Fill remaining letters
    for (char c = 'A'; c <= 'Z'; c++) {
        if (c == 'J') continue; // Skip 'J'
        if (!isCharInMatrix(c)) {
            keyMatrix[x][y++] = c;
            if (y == 5) { x++; y = 0; }
        }
    }
}
// Function to display the key matrix
void displayKeyMatrix() {
    printf("\nPlayfair Key Matrix:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%c ", keyMatrix[i][j]);
        }
        printf("\n");
    }
}
// Function to get position of a character in the key matrix
void getPosition(char c, int *row, int *col) {
    if (c == 'J') c = 'I'; // Treat 'J' as 'I'
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (keyMatrix[i][j] == c) {
                *row = i;
                *col = j;
                return;
            }
}
// Function to prepare plaintext (remove spaces, handle duplicate letters)
void formatPlaintext(char plaintext[], char formattedText[]) {
    int len = strlen(plaintext);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(plaintext[i])) {
            formattedText[j++] = toupper(plaintext[i]);
        }
    }
    formattedText[j] = '\0';
    // Insert 'X' between duplicate letters and pad odd-length text
    char finalText[100];
    int k = 0;
    for (int i = 0; i < j; i += 2) {
        finalText[k++] = formattedText[i];
        if (i + 1 < j) {
            if (formattedText[i] == formattedText[i + 1])
                finalText[k++] = 'X'; // Insert 'X' if pair is the same
            finalText[k++] = formattedText[i + 1];
        }
    }
    if (k % 2 != 0) finalText[k++] = 'X'; // Pad with 'X' if odd-length
    finalText[k] = '\0';
    strcpy(formattedText, finalText);
}
// Function to encrypt a pair of characters
void encryptPair(char a, char b, char *enc1, char *enc2) {
    int row1, col1, row2, col2;
    getPosition(a, &row1, &col1);
    getPosition(b, &row2, &col2);
    if (row1 == row2) { // Same row: Shift right
        *enc1 = keyMatrix[row1][(col1 + 1) % 5];
        *enc2 = keyMatrix[row2][(col2 + 1) % 5];
    } else if (col1 == col2) { // Same column: Shift down
        *enc1 = keyMatrix[(row1 + 1) % 5][col1];
        *enc2 = keyMatrix[(row2 + 1) % 5][col2];
    } else { // Rectangle swap
        *enc1 = keyMatrix[row1][col2];
        *enc2 = keyMatrix[row2][col1];
    }
}
// Function to encrypt the text
void encryptText(char plaintext[], char ciphertext[]) {
    formatPlaintext(plaintext, plaintext);
    int len = strlen(plaintext);
    for (int i = 0; i < len; i += 2) {
        encryptPair(plaintext[i], plaintext[i + 1], &ciphertext[i], &ciphertext[i + 1]);
    }
    ciphertext[len] = '\0';
}
// Function to decrypt a pair of characters
void decryptPair(char a, char b, char *dec1, char *dec2) {
    int row1, col1, row2, col2;
    getPosition(a, &row1, &col1);
    getPosition(b, &row2, &col2);
    if (row1 == row2) { // Same row: Shift left
        *dec1 = keyMatrix[row1][(col1 + 4) % 5];
        *dec2 = keyMatrix[row2][(col2 + 4) % 5];
    } else if (col1 == col2) { // Same column: Shift up
        *dec1 = keyMatrix[(row1 + 4) % 5][col1];
        *dec2 = keyMatrix[(row2 + 4) % 5][col2];
    } else { // Rectangle swap
        *dec1 = keyMatrix[row1][col2];
        *dec2 = keyMatrix[row2][col1];
    }
}
// Function to decrypt the text
void decryptText(char ciphertext[], char decryptedText[]) {
    int len = strlen(ciphertext);
    for (int i = 0; i < len; i += 2) {
        decryptPair(ciphertext[i], ciphertext[i + 1], &decryptedText[i], &decryptedText[i + 1]);
    }
    decryptedText[len] = '\0';
}
int main() {
    char plaintext[100], ciphertext[100], decryptedText[100], key[100];
    printf("Implementaion of Playfair cipher:\n");
    // Input keyword
    printf("Enter key: ");
    scanf("%s", key);
    generateKeyMatrix(key);
    // Display the key matrix
    displayKeyMatrix();
    // Input plaintext
    printf("Enter plaintext: ");
    scanf("%s", plaintext);
    // Encrypt
    encryptText(plaintext, ciphertext);
    printf("Encrypted Text: %s\n", ciphertext);
    // Decrypt
    decryptText(ciphertext, decryptedText);
    printf("Decrypted Text: %s\n", decryptedText);
    printf("Kiran Joshi Sukubhattu\n");
    return 0;
}

