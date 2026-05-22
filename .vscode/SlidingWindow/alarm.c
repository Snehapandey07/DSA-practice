#include <stdio.h>

int main() {
    char name[50];
    int age;

    printf("What is your name? ");
    scanf("%s", name);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHello %s!\n", name);
    printf("You are %d years old.\n", age);

    if(age >= 18) {
        printf("You are an adult.\n");
    } else {
        printf("You are a teenager/kid.\n");
    }

    printf("\a");   // Alert sound (may not work online)

    return 0;
}