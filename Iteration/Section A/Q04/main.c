#include <stdio.h>

int main () {

    int counter;
    int num, sum = 0;

    printf("How many number do you want to sum: ");
    scanf("%d", &counter);

    printf("Enter numbers: ");

    for (int i = 1; i <= counter; i++) {
        scanf("%d", &num);

        sum += num;

    }

    printf("Sum = %d\n", sum);

    return 0;
}