#include <iostream>
#include <vector>
using namespace std;

int main() {
     vector<int>v; //you do not need to mention size 

     // inserting 
     v.push_back(6);
     v.push_back(1);
     v.push_back(4);
     // update
     v[0] = 7;
     //access
     cout<<v[0]<<" ";
     cout<<v[1]<<" ";
     cout<<v[2]<<" ";

}