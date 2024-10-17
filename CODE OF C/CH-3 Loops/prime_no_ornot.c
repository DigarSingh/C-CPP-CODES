#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int N, count = 0, num = 2;

    printf("Enter the number of prime numbers you want to print: ");
    scanf("%d", &N);

    printf("The first %d prime numbers are:\n", N);
    while (count < N) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++; 
        }
        num++;
    }

    printf("\n");
    return 0;
}
