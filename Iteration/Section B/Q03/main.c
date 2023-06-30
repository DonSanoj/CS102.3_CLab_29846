#include <stdio.h>

int main () {

    float price[10], sum = 0.0, avg;
    int count = 0;

    printf("Enter the price of 10 items\n");
    
    for (int i = 0; i < 10; i++) {
        printf("Item %d price: ", i + 1);
        scanf("%f", &price[i]);

        sum += price[i];

        if (price[i] >200) {
            count++;
        }
    }

    avg = sum / 10;

    printf("Average value of an item: %.2f\n", avg);
    printf("Number of items greater than 200: %d\n", count);

    return 0;
}