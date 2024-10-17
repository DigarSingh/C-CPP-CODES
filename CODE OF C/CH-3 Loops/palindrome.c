#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original, remainder;
    original = num;

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int N;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    printf("Palindrome numbers up to %d are:\n", N);
    for (int i = 1; i <= N; i++) {
        if (isPalindrome(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
