#include <stdio.h>

int main()
{
    int num1, num2;  // Declare the variables

    printf("Enter first number: ");  // Get user input and store to the variables
    scanf("%d", &num1);

    printf("Enter second number: ");  // Get user input and store to the variables
    scanf("%d", &num2);

    printf("\n")  // Skip a line for cleanliness

    // Process and print whether first number is multiple of the second number
    if (num1 % num2 == 0) {
        printf("%d is a multiple of %d\n.", num1, num2);
    }
    else {
        printf("%d is not a multiple of %d\n.", num1, num2);
    }

    return 0;
}
