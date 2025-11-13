#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    char c = 'X';

    int *pInt = &a;
    float *pFloat = &b;
    char *pChar = &c;

    printf("Value of int: %d\n", *pInt);
    printf("Value of float: %.2f\n", *pFloat);
    printf("Value of char: %c\n", *pChar);

    re
