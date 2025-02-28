#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    int c;

    // Open the input file for reading
    inFile = fopen("lower.txt", "r");
    if (inFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open the output file for writing
    outFile = fopen("output.txt", "w");
    if (outFile == NULL) {
        perror("Error opening output file");
        fclose(inFile);
        return 1;
    }

    // Process each character: convert to lowercase and write to output file
    while ((c = fgetc(inFile)) != EOF) {
        fputc(tolower(c), outFile);
    }

    // Close files
    fclose(inFile);
    fclose(outFile);

    printf("File conversion completed. Check 'output.txt'\n");
    return 0;
}
