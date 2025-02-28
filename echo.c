#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc == 1) {
        // No arguments passed, set a default argument
        printf("Sorabh86 : [No arguments provided]\n");
    } else {
        // Print provided arguments
        while (--argc > 0) {
            printf("Sorabh86: %s%s", *(++argv), (argc > 1) ? " " : "");
            printf("\n");
        }
    }

    return 0;
}
