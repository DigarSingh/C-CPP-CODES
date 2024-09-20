#include <iostream>
using namespace std;
int main() {
    int cp;
    int sp;
    cout<<"enter cp : ";
    cin>>cp;
    cout<<"enter sp : ";
    cin>>sp;

    if(cp<sp)
        cout<<"profit is : "<<sp-cp;

    if(cp>sp)
        cout<<"loss is : "<<cp-sp;

    if(cp==sp)
        cout<<"no profit no loss";
    return 0;

}