#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("Hello from C Pipeline! Sum: %d\n", add(3, 4));
    return 0;
}
