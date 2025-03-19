#include <stdio.h>

int main() {
    FILE *inputFile;
    FILE *outputFile;
    char buffer[1024];
    size_t numread;
    size_t numwrite;
    size_t bytesRead;

    inputFile = fopen("main.c", "r");
    outputFile = fopen("main.txt", "w");
    for (size_t i = 0; fgets(buffer, 1024, inputFile) != NULL; i++) {
        if (strstr(buffer, "int main()") != NULL) {
            fprintf(outputFile, "%d\n", i+1);
            break;
        }
    }
    fclose(inputFile);
    fclose(outputFile);
}
