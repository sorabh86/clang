#include <stdio.h>
#include <stdlib.h>

struct Date {
    int Month;
    int Day;
    int Year;
};

struct Date AddDecade(struct Date);

int main()
{
    struct Date BDay;
    char buffer[50];

    printf("What month were you born? ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL || (BDay.Month = strtol(buffer, NULL, 10)) <= 0) {
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    printf("What day were you born? ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL || (BDay.Day = strtol(buffer, NULL, 10)) <= 0) {
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    printf("What year were you born? ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL || (BDay.Year = strtol(buffer, NULL, 10)) <= 0) {
        printf("Invalid input. Exiting...\n");
        return 1;
    }

    printf("You were born on %d/%d/%d?\n", BDay.Month, BDay.Day, BDay.Year);

    BDay = AddDecade(BDay);

    printf("You will be 10 years older on %d/%d/%d\n", BDay.Month, BDay.Day, BDay.Year);

    return 0;
}

struct Date AddDecade(struct Date Target) {
    Target.Year += 10;
    return Target;
}
