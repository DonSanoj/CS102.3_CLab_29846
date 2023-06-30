#include <stdio.h>

int main () {

    int integer_arry[10], i;

    printf("Enter integer numbers: ");

    for (i = 0; i < 10; i++) {
        scanf("%d", &integer_arry[i]);
    }
    
    for (i = 0; i < 10; i++) {
        printf("%d ", integer_arry[i]);
    }

    return 0;
}