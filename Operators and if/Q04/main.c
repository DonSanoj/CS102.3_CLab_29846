#include <stdio.h>

int main()
{
    float radius, pie = 3.14159; // Declare the variables

    printf("Enter circle radius: "); // User output and get user input
    scanf("%f", &radius);

    printf("\n"); // Skip a line for cleanliness

    printf("Circle diameter: %.2f units\n", radius * 2); // Process in printf statement

    printf("Circumference of circle: %.4f units\n", 2 * pie * radius);  // Process in printf statement

    printf("Area of circle: %.4f square units\n", pie * radius, radius);  // Process in printf statement

    return 0;
}
