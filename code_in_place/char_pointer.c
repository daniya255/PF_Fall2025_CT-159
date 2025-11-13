#include <stdio.h>
void printChar(char *ch) {
    printf("Character: %c\n", *ch);
}

int main() {
    char c = 'A';
    printChar(&c);   

    return 0;
}
