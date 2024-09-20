#include <iostream>
using namespace std;
 
int main() {
    int n,m;
    cout<<"enter number of rows : ";
    cin>>n;
    cout<<"enter number of colm : ";
    cin>>m;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"* ";
        }
    cout<<"\n";
    }

}