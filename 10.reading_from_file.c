#include <stdio.h>

int main() {

    FILE *filePointer;
    filePointer = fopen("/Users/ari/Desktop/voipe-c/numbers.s", "r");

    if(filePointer == NULL) {
        printf("failed to open");
        return 1;
    }

    int num1, num2, num3, num4, sum;

    fscanf(filePointer, "%d %d %d %d", &num1, &num2, &num3, &num4);
    fclose(filePointer);

    sum = num1 + num2 + num3 + num4;

    printf("Numbers found in the file numbers.s:\n");
    printf("%d, %d, %d and %d", num1, num2, num3, num4);
    printf("\nSum of the numbers: %d", sum);


    return 0;
}