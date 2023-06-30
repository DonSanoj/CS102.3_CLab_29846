#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    int num1, num2, ans;
    int operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("\n");

    printf("\t--Calculator--\n");

    printf("\n");

    printf("Addition -----------> 1\n");
    printf("Subtraction --------> 2\n");
    printf("Multiple -----------> 3\n");
    printf("Division -----------> 4\n");
    printf("\n");
    printf("\t Choose any operation for calculate as number(ex:1): ");
    scanf("%d", &operator);
    printf("\n");

    switch (operator)
    {
    case 1:
        ans = num1 + num2;
        printf("Addition = %d", ans);
        break;
    
    case 2:
        ans = num1 - num2;
        printf("Subtraction = %d", ans);
        break;

    case 3:
        ans = num1 * num2;
        printf("Multiplication = %d", ans);
        break;

    case 4:
        ans = num1 / num2;
        printf("Division = %d", ans);
    
    default:
        break;
    }

    return 0;
}