#include <stdio.h>

// int main () {

//     int num;

//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (num % 2 == 0) {
//         printf("Even number");
//     }
//     else {
//         printf("Odd number");
//     }

//     return 0;
// }

int main () {

    int num, ans;

    printf("Enter a number: ");
    scanf("%d", &num);

    ans = num % 2;

    switch (ans)
    {
    case 0:
        ans = 0;
        printf("Even number");
        break;

    case 1:
        ans != 0;
        printf("Odd number");
        break;
    
    default:
        break;
    }
}