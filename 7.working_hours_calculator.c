#include <stdio.h>

#define MAX_DAYS 30

int main() {
    int numDays;
    float dailyHours[MAX_DAYS];
    float totalHours = 0.0;

    printf("The program calculates the total hours worked during\n"
           "a specific period and the average length of a day.\n");
    printf("How many days: ");
    scanf("%d", &numDays);

    // Input daily working hours
    for (int i = 0; i < numDays; ++i) {
        printf("Enter the working hours for day %d: ", i + 1);
        scanf("%f", &dailyHours[i]);
        totalHours += dailyHours[i];
    }

    float averageHours = totalHours / numDays;

    printf("\nTotal hours worked: %.1f\n", totalHours);
    printf("Average length of day: %.1f\n", averageHours);

    printf("Hours entered:");
    for (int i = 0; i < numDays; ++i) {
        printf("%.1f ", dailyHours[i]);
    }

    return 0;
}
