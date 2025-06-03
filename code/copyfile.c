// Write a program to copy the content of one file to another using command line arguments.

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <source_file> <destination_file>\n", argv[0]);
        return 1;
    }

    FILE *sourceFile = fopen(argv[1], "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    FILE *destFile = fopen(argv[2], "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

    char buffer[1024];
    size_t bytesRead;

    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("Content copied from %s to %s successfully.\n", argv[1], argv[2]);
    return 0;
}
