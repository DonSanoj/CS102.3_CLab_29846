#include <stdio.h>

int main () {

    int numbers, i;

    printf("Enter an integer: ");
    scanf("%d", &numbers);

    printf("Factors\n");

    for (i = 1; i <= numbers; ++i) {
        if (numbers % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}