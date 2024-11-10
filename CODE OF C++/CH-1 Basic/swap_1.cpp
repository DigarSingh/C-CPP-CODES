#include <iostream>
using namespace std;
int main() {
     int a=10,b=20,temp;
     cout<<"Before swapping\n a="<<a<<" b="<<b<<endl;

     temp=a;
     a=b;
     b=temp;

     cout<<"After swapping\n a="<<a<<" b="<<b<<endl;
     return 0;
}