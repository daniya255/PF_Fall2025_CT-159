#include <stdio.h>

int main() {
    int num, lastDigit, rest, temp;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 9 || temp < -9) {   // keep reducing until small number
        lastDigit = temp % 10;        // last digit
        rest = temp / 10;             // remaining number
        temp = rest - (2 * lastDigit);
        printf("Step: %d\n", temp);
    }

    if (temp == 0 || temp == 7 || temp == -7)
        printf("%d is divisible by 7.\n", num);
    else
        printf("%d is NOT divisible by 7.\n", num);

        getchar();
        getchar();
         return 0;
}
