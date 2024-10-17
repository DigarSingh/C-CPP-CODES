#include <stdio.h>

int main () {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int k = 0; k < i; k++) {
            printf("%c", 'A' + k);
        }
        for (int k = i - 2; k >= 0; k--) {
            printf("%c", 'A' + k);
        }
        printf("\n");
    }
}