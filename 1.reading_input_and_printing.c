#include <stdio.h>

int input_and_print() {
    int num1 = 0, square = 0;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    square = num1 * num1;
    printf("The square of the number you entered is %d", square);

    return 0;
}