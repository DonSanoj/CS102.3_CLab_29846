#include <stdio.h>

int main () {

    int marks[10];
    int total = 0;

    printf("Enter 10 marks: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &marks[i]);

        total += marks[i];
    }

    float average = total / 10.0;

    printf("Total: %d\n", total);
    printf("Average: %.2f\n", average);

    if (average < 50) {
        printf("Fail\n");
    }
    else{
        printf("Pass\n");
    }


    return 0;
}