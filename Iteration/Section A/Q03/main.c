#include <stdio.h>

int main () {

    char select;
    int n, j = 1;
    unsigned long long factorial = 1;

    printf("\tSelect an appropriate looping structure\n");
    printf("Enter 'F' for For loop\n");
    printf("Enter 'W' for While loop\n");
    printf("Enter 'D' for Do..While loop\n");
    printf("Enter any character of above given: ");
    scanf("%s", &select);

    printf("Enter factorial number: ");
    scanf("%d", &n);

    if (factorial < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
        return 0;
    }

    switch (select) {

        case 'F':
            for(int i = 1; i <= n; i++) {
                factorial *= i;
            }
            printf("Factorial: %d", factorial);
            break;

        case 'W':
            while (j <= n)
            {
                factorial *= j;
                j++;
            }
            printf("%d", factorial);
            break;

        case 'D':
            do
            {
                factorial *= j;
                j++;
            } while (j <= n);
            printf("%d", factorial);
            break;

        default:
            break;
    }

    return 0;
}