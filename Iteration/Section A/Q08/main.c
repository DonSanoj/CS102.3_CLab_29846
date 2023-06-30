#include <stdio.h>
#include <math.h>

int main () {

    int number, original_number, remainder;
    int result = 0, i = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original_number = number;

    while (original_number != 0)
    {
        original_number /= 10;
        ++i;
    }

    original_number = number;

    while (original_number != 0)
    {
        remainder = original_number % 10;
        result += pow(remainder, i);
        original_number /= 10;
    }
    
    if (result == number) {
        printf("%d is an Armstrong number.\n", number);
    }
    else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}