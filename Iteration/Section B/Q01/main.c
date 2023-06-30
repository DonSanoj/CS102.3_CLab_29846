#include <stdio.h>

int main () {

    int number, positive_number = 0, negative_number = 0, zero_number = 0;

    printf("Enter 10 numbers: ");

    for (int i = 0; i < 10; i++) {
        scanf("%d", &number);

        if (number > 0) {
            positive_number++;
        }
        else if (number < 0) {
            negative_number++;
        }
        else {
            zero_number++;
        }
    }

    printf("Total positive numbers: %d\n", positive_number);
    printf("Total negative numbers: %d\n", negative_number);
    printf("Total zeros: %d\n", zero_number);

    return 0;
}