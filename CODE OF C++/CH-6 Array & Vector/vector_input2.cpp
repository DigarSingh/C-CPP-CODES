#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<int> v; // vector is created but size is not defined

     for(int i=0;i<=5;i++){ // loop to take input from user
          int x; // variable to store input
          cout<<"Enter 5 elements of vector: ";
          cin>>x; 
          v.push_back(x); // input is stored in vector
     }

     cout<<"The elements of vector are: ";
     for(int i=0;i<=5;i++){ // loop to display output
          cout<<v[i]<<" ";
     }
}     
