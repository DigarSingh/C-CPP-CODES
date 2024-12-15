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
     cout << "Enter the number of rows: ";
     cin>>n;

     for(int i=0;i<=n;i++){ //space
          for(int j=0;j<=n-i;j++){
               cout<<" ";
          }
          for(int j=0;j<=i;j++){ 
               int icj = comb(i,j);
               cout<<icj<<" ";
          }
          cout<<endl;
     }
     return 0;
}