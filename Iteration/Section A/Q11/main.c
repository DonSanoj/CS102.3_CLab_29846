#include <stdio.h>

int main () {

    int numbers, i;

    printf("Enter a number: ");
    scanf("%d", &numbers);

    if (numbers <= 1) {
        return 0;
    }

    for (i = 2; i * i <= numbers; i++) {
        if (numbers % i != 0) {
            printf("%d is a prime number.\n", numbers);
        }
        else {
            printf("%d is not a prime number.\n", numbers);
        }
    }
    return 0;

}