#include <iostream>
using namespace std;
bool search(int arr[],int size,int key){
     for(int i=0;i<size;i++){
          if(arr[i]==key){
               return 1;
          }
     }     
     return 0;
}

int main(){
     int arr[10] = {1,3,6,8,4,5,2,9,10,7};
     int key;
     cout << "enter the element you want to search : ";
     cin >> key;
     
     bool found = search(arr,10,key);

     if(found){
          cout << "key is present "<<endl;
     }
     else{
          cout << "key is not present "<<endl;
     }

}