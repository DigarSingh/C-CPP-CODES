#include <iostream>
using namespace std;

int main() {
    int n,m;
    cout<<"Enter the rows: ";
    cin>>n;
    cout<<"Enter the cols: ";
    cin>>m;
    int arr[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //transpose
    for(int k=0;k<n;k++){
        for(int l=0;l<m;l++){
            cout<<arr[l][k]<<" ";
        }
        cout<<endl;
    }
}