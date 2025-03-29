#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter the rows: ";
    cin>>n;
    cout<<"Enter the cols: ";
    cin>>m;

    int arr[n][m];

    for(int i=0;i<n;i++){  //input 
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    //max
    int max =INT_MIN;
    for(int i=0;i<n;i++){ 
        for(int j=0;j<m;j++){
            if(max < arr[i][j]){
                max = arr[i][j];
            }
        }
    }
    cout<<"Max Element: "<<max;
}
