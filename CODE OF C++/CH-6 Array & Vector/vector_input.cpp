#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<int> v(5); // vector of size 5 is created but no value is assigned

     cout<<"Enter 5 elements of vector: ";
     for(int i=0;i<5;i++){ 
          cin >> v[i]; // input is taken from user
     }
     cout << endl;
     cout<<"The elements of vector are: ";
     for(int i=0;i<5;i++){ 
          cout << v[i]<<" "; // output is displayed
     }

}