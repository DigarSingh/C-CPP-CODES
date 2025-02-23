#include<iostream>
using namespace std;

void printArray(int arr[],int size){
     for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
     }
     return;
}
void sortArray(int arr[],int size){
     int i = 0;
     int j = size -1;
     while(i<j){
          if(arr[i]==0) i++;
          if(arr[j]==1) j--;
          if(arr[i]==1 && arr[j]==0){
               arr[i] = 0;
               arr[j] = 1;

               i++;
               j--;
          }
     }
     return;
}

int main() {
     int arr[] = {1,0,1,1,0,1,0};
     int size = sizeof(arr)/sizeof(arr[0]);
     for(int i=0;i<size;i++){ // taking input   
          cin>>arr[i];
     }
     cout<<"UnSorted Array: ";
     printArray(arr,size);
     cout<<endl;
     sortArray(arr,size);
     cout<<endl;
     cout<<"Sorted Array: ";
     printArray(arr,size);
     cout<<endl;
     return 0;
}
