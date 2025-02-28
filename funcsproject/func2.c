#include <stdio.h>

// Declare external variables
extern int vm, v1, v3;

int v2 = 2;

void func2() {
    printf("f2, vm=%d, v1=%d, v2=%d, v3=%d\n", vm, v1, v2, v3);
}
