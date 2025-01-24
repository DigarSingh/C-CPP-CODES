#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
     vector<int>v;
// find the last occurrence of x in vector  
     v.push_back(1);
     v.push_back(4);
     v.push_back(2);
     v.push_back(6);
     v.push_back(8);
     v.push_back(1);
     v.push_back(10);

     int x = 1;
     int idx = -1;
      for(int i=0;i<v.size();i++){ // forward loop
           if(v[i]==x) idx = i;
     }

     for(int i=v.size()-1;i>=0;i--){ // backward loop
          if(v[i]==x){
          idx = i;
          break;
          }
     }

     cout<<idx;
}