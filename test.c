#include <stdio.h>

void swap(int *first, int *second);

int main() {

    int num1, num2, num3;

    printf("Enter the 1. number: ");
    scanf("%d", &num1);
    printf("Enter the 2. number: ");
    scanf("%d", &num2);
    printf("Enter the 3. number: ");
    scanf("%d", &num3);

    if( num1 > num2 )
        swap(&num1, &num2);
    else if (num1 > num3)
        swap(&num1, &num3);
    else if (num2 > num3)
        swap(&num2, &num3);

    printf("largest: %d , smallest: %d", num1, num2);

    return 0;

}

void swap(int *first, int *second){
    int *temp;
    temp = first;
    second = first;
    first = temp;
}