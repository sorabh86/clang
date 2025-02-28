#ifndef PAUSE_UTIL_H
#define PAUSE_UTIL_H

#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
    #define PAUSE() system("pause")
#else
    #define PAUSE()                           \
        do {                                  \
            printf("Press Enter to continue..."); \
            int c;                            \
            while ((c = getchar()) != '\n' && c != EOF); \
            getchar();                        \
        } while(0)
#endif

#endif
