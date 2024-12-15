#include <iostream>
using namespace std;

int fact(int x){
     int fact=1;
     for(int i=1;i<=x;i++){
          fact*=i;  
     }
     return fact;
}
int comb(int n,int r){
     int ncr=fact(n)/(fact(r)*fact(n-r));
     return ncr;
}
int main() {
     int n;
     cout<<"Enter the value of n : ";
     cin>>n;
     int r;
     cout<<"Enter the value of r : ";
     cin>>r;
     int nfact = fact(n);
     int rfact = fact(r);
     int nrfact = fact(n-r);
     int ncr = comb(n,r);
     cout<<ncr;
     return 0;
}