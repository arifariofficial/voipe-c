#include <stdio.h>

int main() {
    int n = 0, factorial = 1;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n > 0) {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
    }
    printf("The factorial of %d is %d", n, factorial);

    return 0;
}