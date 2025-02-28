#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "input_validate.h"

#define BUFFER_SIZE 10  // Limit input length

int getValidNumber(const char *prompt, int min, int max) {
    char buffer[BUFFER_SIZE];
    int value;

    while (1) {
        printf("%s", prompt);
        
        // Read input
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Error reading input. Try again.\n");
            continue;
        }

        // Remove newline character if present
        buffer[strcspn(buffer, "\n")] = '\0';

        // Check if input contains only digits
        int isValid = 1;
        for (int i = 0; buffer[i] != '\0'; i++) {
            if (!isdigit(buffer[i])) {
                isValid = 0;
                break;
            }
        }

        if (!isValid) {
            printf("Invalid input. Please enter only numbers.\n");
            continue;
        }

        // Convert string to integer
        value = strtol(buffer, NULL, 10);

        // Validate range
        if (value < min || value > max) {
            printf("Value out of range (%d - %d). Try again.\n", min, max);
            continue;
        }

        return value;
    }
}
