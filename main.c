#include <stdio.h>

int main () {
    char name[20];

    printf("Type your name:\n");
    gets(name);
    printf("Your name is %s\n", name);

    return 0;
}
