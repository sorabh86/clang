#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "utils/pause.h"

int main()
{
    char name[4] = {'s', 'o', 'r', '\0'}; // Corrected null termination
    printf("%s \n", name);

    double y = sqrt(30);
    printf("%lf \n", y);

    PAUSE();
    return 0;
}
