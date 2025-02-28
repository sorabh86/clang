#include <stdio.h>

// Declare external variables
extern int vm, v2, v3;

int v1 = 1;

void func1() {
    static int fv1;
    printf("f1, vm=%d, v1=%d, v2=%d, v3=%d\n", vm, v1, v2, v3);
}
