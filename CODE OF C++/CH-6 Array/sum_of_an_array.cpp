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
     int sum=0;
     for(int i=0;i<n-1;i++){
          sum+= arr[i];
     }
     cout<<"The sum of an array is: "<<sum;
}