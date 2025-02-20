#include <stdio.h>

int unchange(int n) {
    n = 4;
    return n;
}

int change(int *n) {
    *n = 4;
    return *n;
}

int main() {
    int a = 3;
    int b = 3;
    unchange(a);
    change(&b);
    printf("a: %d, b: %d \n", a, b);

    return 0;
}