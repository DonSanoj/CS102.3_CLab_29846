#include <stdio.h>

int main () {

    int employeeNo, count = 0;
    float basic_salary;

    do {
        printf("Employee No: ");
        scanf("%d", &employeeNo);

        if (employeeNo == -999) {
            break;
        }
        
        printf("Basic Salary: ");
        scanf("%f", &basic_salary);

        if (basic_salary >= 5000) {
            count++;
        }
    } while (1);

    printf("Number of Employees with Basic Salary >= 5000:");

    return 0;
}