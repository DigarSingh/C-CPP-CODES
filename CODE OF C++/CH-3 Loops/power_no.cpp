#include <iostream>
using namespace std;
int main(){
     int a,b;
     float power=1;
     cout<<"Enter the bass : ";
     cin>>a;
     cout<<"Enter the exponent : ";
     cin>>b;
     bool flag= true;
     if(b<0){
          flag = false;
          b = -b;
     }
     for(int i=1;i<=b;i++){
          power = power*a;
     }
     if(flag==false){
          power = 1/power;
     }
     cout<<a<<" raised to power "<<b<<" is "<<power;
     return 0;
}