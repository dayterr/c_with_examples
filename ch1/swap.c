#include <stdio.h>

int main() {
    double a, b;

    printf("enter a: ");
    scanf("%lf", &a);

    printf("enter b: ");
    scanf("%lf", &b);

    a = a - b;
    b = a + b;
    a = b - a;

    printf("after swap, a: %.2lf\n", a);
    printf("after swap, b: %.2lf\n", b);

    return 0;
}