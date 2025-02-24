#include <stdio.h>

struct user {
    char name[10];
    int age;
};

int main() {
    struct user ruth = {"Ruth", 27};
    printf("Name: %s, age: %d\n", ruth.name, ruth.age);

    return 0;
}