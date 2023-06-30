#include <stdio.h>

int main () {

    char character;

    printf("Enter a character: ");
    scanf("%s", &character);

    switch (character) {

        case 'a':
            printf("Vowel letter");
            break;

        case 'e':
            printf("Vowel letter");
            break;
        
        case 'i':
            printf("Vowel letter");
            break;

        case 'o':
            printf("Vowel letter");
            break;

        case 'u':
            printf("Vowel letter");
            break;

        default:
            printf("Not a vowel letter");
            break;
    }

    return 0;
}