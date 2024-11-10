#include <iostream>
using namespace std;

int factrioal(int x){
     int fact=1;
     for(int i=1;i<=x;i++){
          fact=fact*i;  
     }
     return fact;
}

int main() {
     int n;
     cout<<"Enter the value of n and r : ";
     cin>>n;
     int ncr=factrioal(n);
     printf("factrioal of%d",ncr);
     return 0;
}