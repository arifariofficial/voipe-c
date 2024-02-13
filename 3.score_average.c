#include <stdio.h>

int main() {

    int number = 0;
    int score = 0;
    int sum_of_score = 0;
    float average = 0.0;

    printf("The program calculates the average of scores you enter.\n"
           "End with a negative integer.\n");

    while (score >= 0) {
        printf("Enter score (4-10):");
        scanf("%d", &score);
        if (score > 0) {
            sum_of_score += score;
            number++;
        }
    }

    average = (float) sum_of_score / (float) number;   // need type casting here

    printf("You entered %d scores.\n", number);
    printf("Average score: %.2f\n", average);


    return 0;
}