#include <stdio.h>

// Function declarations (prototypes)
int func1(void);
int func2(void);
int func3(void);

int main(void) {
    func1();
    func2();
    func3();
    
    return 0;
}

int func1(void) {
    return printf("I am function 1\n");
}

int func2(void) {
    return printf("I am function 2\n");
}

int func3(void) {
    return printf("I am function 3\n");
}
