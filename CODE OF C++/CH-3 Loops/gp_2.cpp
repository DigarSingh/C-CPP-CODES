#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number : ";
    cin>>n;
    //100 ,50,25 .....
    int a= 100;
    for(int i=1;i<=n; i++){ 
        cout<<a<<" ";
        a=a/2;
    }
    return 0;
}