#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the first number : ";
    cin>>a;
    cout<<"enter the second number  ";
    cin>>b;
    cout<<"enter the third number : ";
    cin>>c;

    if(a>b)
        if(a>c)
            cout<<a<<" is greatest";
        else
            cout<<c<<" is greatest";
    
    else
        if(b>c)
            cout<<b<<" is greatest";
        else    
            cout<<c<<" is greatest";

}
