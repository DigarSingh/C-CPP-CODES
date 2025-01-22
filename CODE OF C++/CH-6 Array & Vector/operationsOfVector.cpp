#include <iostream>
#include <vector>
using namespace std;

int main() {     
     vector <int> v;
     
     v.push_back(1);
     cout<<v.size()<<endl;
     v.push_back(2);
     cout<<v.size()<<endl;
     v.push_back(3);
     cout<<v.size()<<endl;
     v.push_back(4);
     cout<<v.size()<<endl;
     v.push_back(5);
     cout<<v.size()<<endl;
     v.push_back(6);
     cout<<v.size()<<endl;
     v.push_back(7);
     cout<<v.size()<<endl;
     v.push_back(8);
     cout<<v.size()<<endl;
     v.push_back(9);
     cout<<v.size()<<endl;
     v.push_back(10);
     cout<<v.size()<<endl;

     for(int i=0;i<=v.size();i++){
          cout<<v[i]<<" ";
     }
     cout<<endl;
     v.pop_back();
     v.pop_back();
     v.pop_back();

     for(int i=0;i<=v.size();i++){
          cout<<v[i]<<" ";
     }
}