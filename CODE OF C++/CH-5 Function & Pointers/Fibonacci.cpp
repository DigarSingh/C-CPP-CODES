#include <iostream>
using namespace std;

void fibonacciIterative(int N) {
    int first = 0, second = 1, next;
    
    cout << "Fibonacci Series: ";
    if (N >= 1) cout << first << " ";
    if (N >= 2) cout << second << " ";

    for (int i = 3; i <= N; i++) {
        next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
}

int main() {
    int N;
    cout << "Enter number of terms: ";
    cin >> N;

    fibonacciIterative(N);

    return 0;
}
