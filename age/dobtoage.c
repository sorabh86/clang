#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "../utils/input_validate.h"

struct Date {
    int Month;
    int Day;
    int Year;
};

struct Date AddDecade(struct Date);
int calculateAge(struct Date birthDate);

int main() {
    struct Date BDay;

    BDay.Month = getValidNumber("What month were you born (1-12)? ", 1, 12);
    BDay.Day = getValidNumber("What day were you born (1-31)? ", 1, 31);
    BDay.Year = getValidNumber("What year were you born (1900-2100)? ", 1900, 2100);

    printf("You were born on %02d/%02d/%04d\n", BDay.Month, BDay.Day, BDay.Year);

    int age = calculateAge(BDay);
    printf("You are %d years old.\n", age);

    BDay = AddDecade(BDay);
    printf("You will be 10 years older on %02d/%02d/%04d\n", BDay.Month, BDay.Day, BDay.Year);

    return 0;
}

struct Date AddDecade(struct Date Target) {
    Target.Year += 10;
    return Target;
}

int calculateAge(struct Date birthDate) {
    time_t t = time(NULL);
    struct tm current;
    localtime_s(&current, &t);

    int age = current.tm_year + 1900 - birthDate.Year;

    if (current.tm_mon + 1 < birthDate.Month ||
        (current.tm_mon + 1 == birthDate.Month && current.tm_mday < birthDate.Day)) {
        age--;
    }

    return age;
}
