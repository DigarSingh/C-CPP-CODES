#include <iostream>
using namespace std;

int main(){
     int n,m;
     cout<<"Enter the rows of matrix: ";
     cin>>n;
     cout<<"Enter the cols of matrix: ";
     cin>>m;     
     int arr[n][m];
     int minr = 0,maxr = n-1;
     int minc = 0,maxc = m-1;
     for(int i=0;i<n;i++){         //Input
          for(int j=0;j<m;j++){
               cin>>arr[i][j];
          }
     }
     cout<<"Spiral traversal: ";
     while(minr<=maxr && minc<=maxc){
          for(int j=minc;j<=maxc;j++){  //right
               cout<<arr[minr][j]<<" ";
          }
          minr++;

          for(int i=minr;i<=maxr;i++){  //down
               cout<<arr[i][maxc]<<" ";
          }
          maxc--;
          if(minr > maxr || minc > maxc) break;
               for(int j=maxc;j>=minc;j--){  // left
                    cout<<arr[maxr][j]<<" ";
               }
               maxr--;
          
          
          if(minr > maxr || minc > maxc) break;
               for(int i=maxr;i>=minr;i--){   //up
                    cout<<arr[i][minc]<<" ";
               }
               minc++;
          
          
     }

     return 0;
}