#include <stdio.h>

int main () {

    int base_value, exponant_value;
    int power = 1;

    printf("Enter base value: ");
    scanf("%d", &base_value);

    printf("Enter exponant value: ");
    scanf("%d", &exponant_value);

    for (int i = 0; i < exponant_value; i++)
    {
        power *= base_value;
    }

    printf("%dth power of the %d = %d", exponant_value, base_value, power);    

    return 0;
}