#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int key[2][2] = {{9,4},{5,7}};
    int i;

    printf("Enter plaintext (lowercase, even letters): ");
    scanf("%s", text);

    printf("Encrypted Text: ");

    for(i=0;text[i]!='\0';i+=2){
        int a=text[i]-'a';
        int b=text[i+1]-'a';

        int c1=(key[0][0]*a+key[0][1]*b)%26;
        int c2=(key[1][0]*a+key[1][1]*b)%26;

        printf("%c%c",c1+'A',c2+'A');
    }

    // Inverse key of [[9,4],[5,7]]
    int inv[2][2]={{5,12},{15,25}};

    printf("\nDecrypted Text: ");

    for(i=0;text[i]!='\0';i+=2){
        int a=text[i]-'a';
        int b=text[i+1]-'a';

        int c1=(key[0][0]*a+key[0][1]*b)%26;
        int c2=(key[1][0]*a+key[1][1]*b)%26;

        int p1=(inv[0][0]*c1+inv[0][1]*c2)%26;
        int p2=(inv[1][0]*c1+inv[1][1]*c2)%26;

        printf("%c%c",p1+'a',p2+'a');
    }

    return 0;
}