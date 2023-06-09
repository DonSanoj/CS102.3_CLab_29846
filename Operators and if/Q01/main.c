#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n");

    if (num1 > num2) {
        printf("The highest number is %d\n", num1);
    }
    else {
        printf("The highest number is %d\n", num2);
    }

    return 0;
}
