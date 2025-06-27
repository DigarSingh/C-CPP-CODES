#include <iostream>
using namespace std;

int main(){
     int n,m,p,q;

     cout<<"Enter the rows of 1st matrix: ";
     cin>>n;
     cout<<"Enter the cols of 1st matrix: ";
     cin>>m;
     cout<<"Enter the rows of 1st matrix: ";
     cin>>p;
     cout<<"Enter the cols of 1st matrix: ";
     cin>>q;

     if(m==p){
          int arr1[n][m],arr2[p][q],res[n][q];
          cout<<"Enter the elements of first matrix:\n";
          for(int i=0;i<n;i++){                 // Input of 1st Matrix
               for(int j=0;j<m;j++){
                    cin>>arr1[i][j];
               }
          }
          cout<<"Enter the elements of Second matrix:\n";
          for(int i=0;i<p;i++){               // Input of 2nd Matrix
               for(int j=0;j<q;j++){
                    cin>>arr2[i][j];
               }
          }
          cout<<"1st matrix:\n";            // Output of 1st Matrix
          for(int i=0;i<n;i++){
               for(int j=0;j<m;j++){
                    cout<<arr1[i][j]<<" ";
               }
               cout<<endl;
          }
          cout<<"2nd matrix:\n";           // Output of 2nd Matrix
          for(int i=0;i<p;i++){
               for(int j=0;j<q;j++){
                    cout<<arr2[i][j]<<" ";
               }
               cout<<endl;
          }
          for(int i=0;i<n;i++){           // result matrix 
               for(int j=0;j<q;j++){
                    res[i][j] = 0;
                    for(int k=0;k<p;k++){
                         res[i][j] += arr1[i][k] * arr2[k][j]; 
                    } 
               }
          }
          cout<<"Result matrix:\n";           
          for(int i=0;i<n;i++){         // Output of result matrix 
               for(int j=0;j<q;j++){
                    cout<<res[i][j]<<" ";
               }
               cout<<endl;
          }
     }
     else{
          cout<<"Matrix cannot multiplied";
     }
     

}