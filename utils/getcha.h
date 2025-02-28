#ifndef GETCHA_H
#define GETCHA_H

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #include <conio.h>
    #define GETCHA() getch()
#else
    static inline void GETCHA() {
        printf("Press Enter to continue...");
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
        getchar();
    }
#endif

#endif // GETCHA_H
