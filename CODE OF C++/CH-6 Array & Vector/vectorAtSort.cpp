#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){
     vector<int>v;
     v.push_back(10); 
     v.push_back(2);
     v.push_back(7);
     v.push_back(4);

     for(int i=0;i<v.size();i++){ // loop to display output
          cout<<v.at(i)<<" ";
     }
     cout<<endl;

     //sort
     sort(v.begin(),v.end());
     for(int i=0;i<v.size();i++){ // loop to display output
          cout<<v.at(i)<<" ";
     }
}