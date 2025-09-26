#include <stdio.h>

int main() {
    unsigned char num;  // 8-bit variable (0–255)
    printf("Enter an 8-bit number (0-255): ");
    scanf("%hhu", &num);

    printf("Original number: %u\n", num);

    // Check 4th bit first
    if (num & (1 << 3)) {
        printf("4th bit is ON.\n");
        num = num & ~(1 << 3);   // Turn off 4th bit
        printf("4th bit turned OFF.\n");

        // Now check 7th bit inside
        if (num & (1 << 6)) {
            printf("7th bit is ON.\n");
            num = num & ~(1 << 6);   // Turn off 7th bit
            printf("7th bit turned OFF.\n");
        } else {
            printf("7th bit is already OFF.\n");
        }

    } else {
        printf("4th bit is already OFF.\n");

        // Check 7th bit only if 4th is OFF
        if (num & (1 << 6)) {
            printf("7th bit is ON.\n");
            num = num & ~(1 << 6);
            printf("7th bit turned OFF.\n");
        } else {
            printf("7th bit is already OFF.\n");
        }
    }

    printf("Final number after modification: %u\n", num);

    getchar();
    getchar();
    return 0;
}
