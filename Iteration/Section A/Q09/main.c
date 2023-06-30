#include <stdio.h>

int main () {

    char character;
    int i;

    printf("ASCII value for letters A to Z\n");

    for (i = 65, character = 'A'; i <= 90; i++, character++) {
        printf("%c = %d\n", character, i);
    }
    
    return 0;
}