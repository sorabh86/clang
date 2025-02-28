#include <stdio.h>

// Declare external variables
extern int vm, v1, v2;

int v3 = 3;

void func3() {
    printf("f3, vm=%d, v1=%d, v2=%d, v3=%d\n", vm, v1, v2, v3);
}

void hello() {
    printf("Hello world!!\n");
}
