#include <stdio.h>

int main() {
    int decimalNumber;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNumber);

    printf("Binary: ");
    for (int i = 31; i >= 0; i--) {
        int bit = (decimalNumber >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");

    printf("Octal: %o\n", decimalNumber);

    printf("Hexadecimal: %X\n", decimalNumber);

    return 0;
}
