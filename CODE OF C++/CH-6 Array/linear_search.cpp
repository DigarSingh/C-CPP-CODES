#include <iostream>
using namespace std;
int main(){
     int n;
     cout<<"Enter the size of an array: ";
     cin>>n;
     int arr[n];

     cout<<"Enter the element of array: ";
     for(int i=0;i<n-1;i++){ //taking input 
          cin>>arr[i];
     }
     int x;
     cout<<"Enter the element you want to search: ";
     cin>>x;
     
     //using check mark 
     bool flag= false; // element not present 
     for(int i=0;i<n-1;i++){
          if(arr[i]==x){
               flag=true; // element not present 
          }
     }
     if(flag==true){
          cout<<"Present";
     }
     else{
          cout<<"Not Present";
     }
     return 0;
}