#include <iostream>
using namespace std;

int sum(int a, int b) {
     return a + b;
}

int main() {
     int num1, num2;
     cout << "Enter first numbers: ";
     cin>>num1;
     cout << "Enter second number: "; 
     cin>>num2;
     cout << "The sum is: " << sum(num1, num2) <<endl;
     return 0;
}