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

     vector<int> v2(v.size());
     for(int i=0;i<v.size();i++){
          int j= v.size() -1 -i;
          v2[i]=v[j];
     }
     printvector(v2);

}
