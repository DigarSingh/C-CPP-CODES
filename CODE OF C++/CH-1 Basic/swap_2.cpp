#include <iostream>
using namespace std;     
int main() {
     int a=10,b=20;
     cout<<"Before swapping\n a="<<a<<" b="<<b<<endl;

     a=a+b;
     b=a-b;
     a=a-b;

     cout<<"After swapping\n a="<<a<<" b="<<b<<endl;
     return 0;
}

