#include <stdio.h>
#include <stdlib.h>

int main () {
    float basic_salary, allowance, bonus;
    float monthly_sales, gross_salary;
    int years_of_service;
    char city;

    // Get input values from the user
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    printf("Enter the monthly sales: ");
    scanf("%f", &monthly_sales);

    printf("Enter the years of service: ");
    scanf("%d", &years_of_service);

    printf("Enter the city (C for Colombo): ");
    scanf("%c", &city);

    // Calculate additional allowance based on years of service
    if (years_of_service >= 5) {
        allowance = 0.1 * basic_salary;
    }
    else {
        allowance = 0;
    }

    // Calculate additional allowance based on city
    if (city == 'C') {
        allowance += 2500;
    }
    else {
        allowance += 0;
    }

    // Get monthly sales and calculate bonus
    if (monthly_sales < 25000) {
        bonus = 0.1 * monthly_sales;
    }
    else if (monthly_sales >= 25000 && monthly_sales < 50000) {
        bonus = 0.12 * monthly_sales;
    }
    else if (monthly_sales >= 50000) {
        bonus = 0.15 * monthly_sales;
    }

    // Calculate gross salary
    gross_salary = basic_salary + allowance + bonus;

    // Output the gross salary
    printf("Gross monthly remuneration: Rs. %.2f\n", gross_salary);

    return 0;
}