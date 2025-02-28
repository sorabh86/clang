#include <stdio.h>
#include "../utils/getcha.h"

int main() {
    char a[] = "Hello world";
    char *ap = a;
    int i = 0;

    // Print the address and character values
    while (*ap) {
        printf("Addr: %p, %c\n", (void*)ap, *ap);  // Corrected %x to %p for pointer
        ap++;
    }

    // Reset pointer to start of array
    ap = a;

    // Properly clearing the array
    for (i = 0; i < sizeof(a); i++) {
        *(ap + i) = '\0';
    }

    GETCHA();
    return 0;
}
