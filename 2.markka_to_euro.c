#include <stdio.h>

int main() {
    const float factor = 5.94573;
    float num1 = 0.0;
    float result = 0.0;

    printf("Enter an amount in FIM: ");
    scanf("%f", &num1);

    result =  num1 / factor;

    printf("FIM converted to euro: %.2f\n", result);


    return 0;
}
