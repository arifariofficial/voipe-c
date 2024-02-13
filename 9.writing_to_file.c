#include <stdio.h>

int main() {

    FILE *filePointer;
    filePointer = fopen("hello.usr", "w");
    char data[] = "Hello world!\n";

    if(filePointer == NULL){
        printf("File could not be open.\n");
        return 1;
    }
    fprintf(filePointer, "%s", data);
    printf("Writing to the file was successful.\n");
    printf("Closing the program.\n");
    fclose(filePointer);

    return 0;
}