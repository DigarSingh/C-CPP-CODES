#include <stdio.h>
#include <stdlib.h>

void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number_of_terms>\n", argv[0]);
        return 1;
    }

    int n = atoi(argv[1]);  // Convert the argument to an integer

    if (n <= 0) {
        printf("Number of terms should be a positive integer.\n");
        return 1;
    }

    fibonacci(n);

    return 0;
}
