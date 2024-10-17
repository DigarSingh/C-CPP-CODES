#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

void computeSeries(int N) {
    double sum1 = 0, sum2 = 0, sum3 = 0;

    for (int n = 1; n <= N; n++) {
        sum1 += (double)n / factorial(n);
        
        sum2 += (double)(n * 11) / factorial(n);
        
        sum3 += (double)(n * (n + 1)) / factorial(n);
    }

    printf("Sum of Series 1 (S = 1 + 2/2! + 3/3! + ...): %.4f\n", sum1);
    printf("Sum of Series 2 (S = 1 + 22/2! + 33/3! + ...): %.4f\n", sum2);
    printf("Sum of Series 3 (S = 2 + 6/2! + 12/3! + ...): %.4f\n", sum3);
}

int main() {
    int N;

    printf("Enter the number of terms (N): ");
    scanf("%d", &N);

    computeSeries(N);

    return 0;
}
