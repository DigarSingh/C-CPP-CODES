#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number : ";
    cin>>n;
    //4,7,10,1..
    int a= 4;
    for(int i=1;i<=n; i++){ 
        cout<<a<<" ";
        a=a+3;
    }
}