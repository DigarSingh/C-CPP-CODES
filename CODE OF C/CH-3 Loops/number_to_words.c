#include <stdio.h>

void printDigitInWords(int digit) {
    switch (digit) {
        case 0: printf("Zero "); break;
        case 1: printf("One "); break;
        case 2: printf("Two "); break;
        case 3: printf("Three "); break;
        case 4: printf("Four "); break;
        case 5: printf("Five "); break;
        case 6: printf("Six "); break;
        case 7: printf("Seven "); break;
        case 8: printf("Eight "); break;
        case 9: printf("Nine "); break;
    }
}

int reverseNumber(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + (num % 10);
        num /= 10;
    }
    return reversed;
}

int main() {
    int num, reversed;

    printf("Enter any number: ");
    scanf("%d", &num);

    if (num == 0) {
        printDigitInWords(0);
        return 0;
    }

    reversed = reverseNumber(num);

    while (reversed != 0) {
        int digit = reversed % 10;
        printDigitInWords(digit);
        reversed /= 10;
    }

    printf("\n");
    return 0;
}
