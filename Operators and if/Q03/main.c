#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[15];
    float basic_salary, new_salary;

    printf("Enter employee name: ");
    scanf("%s", &name);

    printf("Enter employee basic salary: ");
    scanf("%f", &basic_salary);

    printf("\n");

    if (basic_salary >= 10000) {

        new_salary = basic_salary + (basic_salary * 15 / 100);
    }
    else if (basic_salary < 10000 && basic_salary >= 5000) {

        new_salary = basic_salary + (basic_salary * 10 / 100);
    }
    else if (basic_salary < 5000) {

        new_salary = basic_salary + (basic_salary * 5 / 100);
    }

    printf("%s new salary is %.2f\n", name, new_salary);

    return 0;
}
