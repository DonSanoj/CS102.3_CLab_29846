#include <stdio.h>

int main () {
    
    int num1 = 0, num2 = 1, nextNum, i;

    printf("The first 10 numbers of fibonacci sequence\n");

    for (i = 1; i <= 10; i++) {
        printf("%d\n", num1);
        nextNum = num1 + num2;
        num1 = num2;
        num2 = nextNum;
    }

    return 0;
}