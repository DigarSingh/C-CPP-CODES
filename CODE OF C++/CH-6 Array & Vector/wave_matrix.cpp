#include <iostream>
using namespace std;

int main(){
     int n,m;

     cout<<"Enter the rows of matrix: ";
     cin>>n;
     cout<<"Enter the cols of matrix: ";
     cin>>m;

     int arr[n][m];

     for(int i=0;i<n;i++){         //Input
          for(int j=0;j<m;j++){
               cin>>arr[i][j];
          }
     }

     for(int i=0;i<n;i++){        //Output
          if(i%2==0){
               for(int j=0;j<m;j++){
               cout<<arr[i][j]<<" ";
               }
               cout<<endl;
          }
          else{
               for (int j=n-1;j>=0;j--){
                    cout<<arr[i][j]<<" ";
               }
               cout<<endl;
          }
     }



     return 0;
}