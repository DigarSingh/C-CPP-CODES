#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void printvector(vector<int> &a){
     for(int i=0;i<a.size();i++){
          cout<<a[i]<<" ";
     }
     cout<<endl;
}

int main() {
     vector<int> v;
     v.push_back(2);
     v.push_back(3);
     v.push_back(5);
     v.push_back(7);
     v.push_back(9);
     v.push_back(1);

     printvector(v);
//reverse Through while loop 
     int i = 0;
     int j = v.size()-1;
     while(i<=j){
     int temp = v[i];
     v[i] = v[j];
     v[j] = temp;

     i++;
     j--;
     }
     printvector(v);


// reverse through for loop
     for(int i = 0,j =v.size()-1;i<=j;i++,j--){
          int temp = v[i];
          v[i] = v[j];
          v[j] = temp;
     }
     printvector(v);

}