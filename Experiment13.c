#include <stdio.h>
#include <string.h>

int main() {
    char plain[100], cipher[100];

    printf("Enter Plaintext: ");
    scanf("%s", plain);

    printf("Enter Ciphertext: ");
    scanf("%s", cipher);

    printf("\nKnown Plaintext Attack\n");

    printf("Plaintext : %s\n", plain);
    printf("Ciphertext: %s\n", cipher);

    printf("\nUsing enough plaintext-ciphertext pairs,\n");
    printf("the Hill Cipher key matrix can be recovered.\n");

    return 0;
}