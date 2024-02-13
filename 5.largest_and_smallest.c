#include <stdio.h>

int main() {
    int num1, num2, num3;
    int largest, smallest;

    printf("Enter the 1. number: ");
    scanf("%d", &num1);

    printf("Enter the 2. number: ");
    scanf("%d", &num2);

    printf("Enter the 3. number: ");
    scanf("%d", &num3);

    // Assume the first number is both the largest and smallest initially
    largest = smallest = num1;

    // Compare with the second number
    if (num2 > largest) {
        largest = num2;
    } else if (num2 < smallest) {
        smallest = num2;
    }

    // Compare with the third number
    if (num3 > largest) {
        largest = num3;
    } else if (num3 < smallest) {
        smallest = num3;
    }

    printf("Among the numbers you entered,\n");
    printf("the largest was %d and the smallest was %d", largest, smallest);

    return 0;
}
