#include <stdio.h>

int main () {

    int num, sum = 0;

    printf("Enter numbers: ");

    while (-1)
    {
        scanf("%d", &num);

        if (num == -1) {

            sum += num;

            printf("Sum of all above numbers = %d\n", sum);
            break;
        }
    }

    return 0;
}