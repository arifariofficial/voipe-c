#include <stdio.h>

#define MATRIX_SIZE 10

int main() {
    FILE *fileA, *fileB, *fileSum;

    // Open files for reading matrices A and B
    fileA = fopen("mata.txt", "r");
    fileB = fopen("matb.txt", "r");

    // Check if the files were opened successfully
    if (fileA == NULL || fileB == NULL) {
        printf("Error: Could not open one or more input files.\n");
        return 1;  // Indicates an error
    }

    // Open file for writing the sum matrix
    fileSum = fopen("sum.usr", "w");

    // Check if the file was opened successfully
    if (fileSum == NULL) {
        printf("Error: Could not open the output file.\n");
        fclose(fileA);
        fclose(fileB);
        return 1;  // Indicates an error
    }

    // Variables to store matrix elements
    int matrixA[MATRIX_SIZE][MATRIX_SIZE];
    int matrixB[MATRIX_SIZE][MATRIX_SIZE];
    int sumMatrix[MATRIX_SIZE][MATRIX_SIZE];

    // Read matrix A from file
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            fscanf(fileA, "%d", &matrixA[i][j]);
        }
    }

    // Read matrix B from file
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            fscanf(fileB, "%d", &matrixB[i][j]);
        }
    }

    // Calculate the sum matrix
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            sumMatrix[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    // Write the sum matrix to the output file
    for (int i = 0; i < MATRIX_SIZE; i++) {
        for (int j = 0; j < MATRIX_SIZE; j++) {
            fprintf(fileSum, "%d ", sumMatrix[i][j]);
        }
        fprintf(fileSum, "\n");  // Add newline after each row
    }

    // Close the files when done
    fclose(fileA);
    fclose(fileB);
    fclose(fileSum);

    // Print success message
    printf("The sum of the matrices has been calculated into the file sum.usr.\n");

    return 0;  // Indicates success
}
