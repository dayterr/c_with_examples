#include <stdio.h>

int main() {
    char operator;
    int a, b;

    printf("enter the operator:");
    scanf("%c", &operator);
    printf("enter 2 numbers:");
    scanf("%d %d", &a, &b);

    switch (operator)
    {
    case '+':
        printf("result: %d", a + b);
        break;
    case '-':
        printf("result: %d", a - b);
        break;
    case '*':
        printf("result: %d", a * b);
        break;
    case '/':
        if (b == 0) {
            printf("zero division forbidden");
            break;
        };
        printf("result: %d", a / b);
        break;
    
    default:
        printf("unknown operator");
        break;
    }
}