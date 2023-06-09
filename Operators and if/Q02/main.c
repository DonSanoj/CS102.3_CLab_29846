#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3;
    int max, min;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter third number: ");
    scanf("%d", &num3);

    printf("\n");

    if (num1 > num2) {

        if (num1 > num3) {
            max = num1;

            if (num2 > num3) {
                min = num3;
            }
            else {
                min = num2;
            }
        }
        else {
            max = num3;

            if (num1 > num2) {
                min = num2;
            }
            else {
                min = num1;
            }
        }
    }
    else {

        if (num2 > num3) {

            max = num2;

            if (num1 > num3) {
                min = num3;
            }
            else {
                min = num1;
            }
        }
        else {

            max = num3;

            if (num1 > num2) {
                min = num2;
            }
            else {
                min = num1;
            }
        }
    }

    printf("The largest number is %d\n", max);
    printf("The smallest number is %d\n", min);

    return 0;
}
