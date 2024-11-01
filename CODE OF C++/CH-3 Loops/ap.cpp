#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number : ";
    cin>>n;
    //100 ,97,94 .....
    int a= 100;
    for(int i=1;i<=n; i++){ 
        cout<<a<<" ";
        a=a-3;
    }
    return 0;
}