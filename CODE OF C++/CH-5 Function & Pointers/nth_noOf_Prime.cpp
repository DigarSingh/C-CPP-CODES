#include <iostream>
using namespace std;
bool isPrime(int n){
     for(int i=2;i<n;i++){
          if(n%i==0){
               return false;
          }
     }
     return true;
}
int main(){
     int n;
     cout<<"Enter the number: ";
     cin>>n;
     int count=0;
     for(int i=2;count<n;i++){
          if(isPrime(i)){
               count++;
               cout<<i<<endl;
          }
     }
     return 0;
}