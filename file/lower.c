#include <stdio.h>
#include <ctype.h>

int main(void) {
    FILE *file = fopen("lower.txt", "r"); // Open file in read mode
    if (file == NULL) {
        perror("Error opening file not found [lower.txt]");
        return 1; // Exit with error
    }

    int c;
    while ((c = fgetc(file)) != EOF) {
        putchar(tolower(c)); // Convert to lowercase and print
    }

    fclose(file); // Close file
    return 0;
}
