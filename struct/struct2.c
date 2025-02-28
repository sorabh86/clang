#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

struct Date {
    int Month;
    int Day;
    int Year;
};

static struct Date AddDecade(struct Date);
int s_getValidNumber(const char *prompt, int min, int max);

int main() {
    struct Date BDay;

    BDay.Month = s_getValidNumber("What month were you born? ", 1, 12);
    BDay.Day = s_getValidNumber("What day were you born? ", 1, 31);
    BDay.Year = s_getValidNumber("What year were you born? ", 1900, 2025); // Adjust range as needed

    printf("You were born on %d/%d/%d?\n", BDay.Month, BDay.Day, BDay.Year);

    BDay = AddDecade(BDay);
    printf("You will be 10 years older on %d/%d/%d\n", BDay.Month, BDay.Day, BDay.Year);

    return 0;
}

/** 
 * Function to add 10 years to a given date 
 */
static struct Date AddDecade(struct Date Target) {
    Target.Year += 10;
    return Target;
}

/** 
 * Function to get a valid integer input within a range
 */
int s_getValidNumber(const char *prompt, int min, int max) {
    char buffer[50];
    int num;
    char *endPtr;

    while (1) {
        printf("%s", prompt);
        
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            printf("Error reading input. Please try again.\n");
            continue;
        }

        // Convert input to integer
        num = strtol(buffer, &endPtr, 10);

        // Check for invalid input (non-numeric characters)
        if (endPtr == buffer || *endPtr != '\n' || num < min || num > max) {
            printf("Invalid input. Enter a number between %d and %d.\n", min, max);
            continue;
        }

        return num;
    }
}
