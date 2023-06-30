#include <stdio.h>
#include <stdlib.h>

int main () {

    int operator;
    float ans, radius;

    printf("\tCalculate\n");
    printf("Calculate Circumference of a circle --------> 1\n");
    printf("Calculate Area -----------------------------> 2\n");
    printf("Calculate Volumn(sphere) -------------------> 3\n");
    printf("\n");
    printf("\t Choose any operation for calculate(ex: Calculate circumference): ");
    scanf("%d", &operator);
    printf("\n");
    printf("Enter radius: ");
    scanf("%f", &radius);

    switch (operator) {

        case 1:
            ans = 2 * 3.14 * radius;
            printf("The circumference of the circle is %.2f", ans);
            break;

        case 2:
            ans = 2 * 3.14 * radius * radius;
            printf("The area of the circle is %.2f", ans);
            break;

        case 3:
            ans = (4 / 3) * 3.14 * radius * radius * radius;
            printf("The volume of the sphere is %.2f", ans);
            break;

        default:
            break;

    }

    return 0;
}