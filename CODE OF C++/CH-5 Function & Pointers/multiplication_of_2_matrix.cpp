#include <iostream>
using namespace std;

int main(){
     int rows,col;

     //input matrix size
     cout<<"enter the rows: ";
     cin>>rows;
     cout<<"enter the col: ";
     cin>>col;

     int matrix1[rows][col],matrix2[rows][col],result[rows][col];

     //input first matrix
     cout<<"Enter the first matrix: \n";
     for(int i=0;i<rows;i++){
          for(int j = 0;j<col;j++){
               cin>>matrix1[i][j];
          }
     }

     //input second matrix
     cout<<"Enter the second matrix: \n";
     for(int i=0;i<rows;i++){
          for(int j = 0;j<col;j++){
               cin>>matrix2[i][j];
          }
     }

     //add matrix
     for(int i=0;i<rows;i++){
          for(int j=0;j<col;j++){
               result[i][j] = matrix1[i][j] * matrix2[i][j];
          }
     }

     //display the sum matrix
     cout<<"Sum of the matrices: \n";
     for(int i=0;i<rows;i++){
          for(int j=0;j<col;j++){
               cout<<result[i][j]<< " ";
          }
          cout<<"\n";
     }
     return 0;

}