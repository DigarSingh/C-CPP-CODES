#include <iostream>
using namespace std;
int main ()
{
    int a = 10;
    int *p = &a;
    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << &a << endl;
    cout << "Value of a using pointer: " << *p << endl;
    cout << "Address of a using pointer: " << p << endl;
    return 0;
}