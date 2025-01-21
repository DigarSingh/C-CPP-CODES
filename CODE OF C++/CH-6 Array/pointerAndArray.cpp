#include <iostream>
using namespace std;

int main(){
     int arr[]={1,2,3,4,5,6};
     int* ptr = arr;

     for(int i=0;i<=5;i++){ //printing array before changing element
          cout<<ptr[i]<<" ";
     }
     
     cout<<endl;
     *ptr = 8; //ptr[0] = 8
     ptr++;
     *ptr = 9; //ptr[1] = 9
     ptr--;

     for(int i=0;i<=5;i++){ //printing array after changing element 
          cout<<ptr[i]<<" ";
     }
}