#include <stdio.h>

int main () {

    int employee_number, work_hours, overtime_rate = 150;
    int overtime_rate_excess = 200, counter;
    int overtime_payment, overtime_exceed_count = 0;

    do {
        printf("Employee number: ");
        scanf("%d", &employee_number);

        if (employee_number == -999) {
            break;
        }

        printf("Work hours: ");
        scanf("%d", &work_hours);

        if (work_hours > 40) {
            overtime_payment = (40 * overtime_rate) + ((work_hours - 40) * overtime_rate_excess);
        }
        else {
            overtime_payment = work_hours * overtime_rate;
        }

        if (overtime_payment > 4000) {
            overtime_exceed_count++;
        }

        printf("Employee No: %d\n", employee_number);
        printf("Overtime Payment: Rs. %d\n", overtime_payment);

        counter++;

    } while (1);

    float overtime_exceed_percentage = (float)overtime_exceed_count;

    printf("Overtime payment exceeds employee percentage: %.2f\n", overtime_exceed_percentage);

    return 0;
}