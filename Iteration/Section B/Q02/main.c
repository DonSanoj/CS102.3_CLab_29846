#include <stdio.h>

int main () {

    int marks[10];
    int max_marks, min_marks, total = 0;
    float avg;

    printf("Enter marks of 10 students\n");

    for (int i = 0; i < 10; i++) {
        printf("Student %d marks: ", i + 1);
        scanf("%d", &marks[i]);

        if (i == 0 || marks[i] > max_marks) {
            max_marks = marks[i];
        }
        else if (i == 0 || marks[i] < min_marks)
        {
            min_marks = marks[i];
        }

        total += marks[i];
        
    }

    avg = (float) total / 10;

    printf("Maximum marks: %d\n", max_marks);
    printf("Minimum marks: %d\n", min_marks);
    printf("Average marks: %f\n", avg);

    return 0;
}