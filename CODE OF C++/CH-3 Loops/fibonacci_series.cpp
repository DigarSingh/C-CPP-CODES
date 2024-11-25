#include <iostream>
using namespace std;
int main() {
     int a=1,b=1,n;
     cout<<"Enter the number of terms : ";
     cin>>n;
     int sum=0;
     for(int i=1;i<=n-2;i++){
         cout<<a<<" ";
         sum = a+b;
         a=b;
         b=sum;
     }
     cout<<endl<<b;
     return 0;
}