#include <stdio.h>

int main () {

    int elements[10];
    int even_number = 0, odd_number = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter %d element: ", i+1);
        scanf("%d", &elements[i]); 

        if (elements[i] % 2 == 0) {
            even_number++;
        }
    }

    printf("Total Even numbers: %d\n", even_number);

    return 0;
}