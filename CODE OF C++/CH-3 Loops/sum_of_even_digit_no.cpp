#include<iostream>
using namespace std;
int main() {
    int n,sum=0;
    cout<<"enter the no. : ";
    cin>>n;

    while(n>0){
        int ld= n%10;
        if(ld %2==0)
        sum+= ld;
        n/=10;
         }
    cout<<sum;
}