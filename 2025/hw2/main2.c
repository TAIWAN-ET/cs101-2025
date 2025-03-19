#include <stdio.h>

int main() {
    FILE *inputFile;
    FILE *outputFile;
    char buffer[1024];
    size_t numread;
    size_t numwrite;
    size_t bytesRead;

    inputFile = fopen("main.c", "r");
    outputFile = fopen("main.txt", "wb+");

    while ((bytesRead = fread(buffer, sizeof(char), sizeof(buffer), inputFile)) > 0) {
        if (fwrite(buffer, sizeof(char), bytesRead, outputFile) != bytesRead) {
            perror("Error writing to main.txt");
            fclose(inputFile);
            fclose(outputFile);
            return 1;
        }
    }
    

}