#include <stdio.h>

// Declare external variables
extern int v1, v2, v3;
extern void hello();
extern void func1();
extern void func2();
extern void func3();

int vm = 0;

int main() {
    hello();
    printf("\nmain, vm=%d, v1=%d, v2=%d, v3=%d\n", vm, v1, v2, v3);
    
    v1++;
    func1();
    
    v2++;
    func2();
    
    v3++;
    func3();

    return 0;
}
