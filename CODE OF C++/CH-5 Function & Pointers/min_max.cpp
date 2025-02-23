#include <iostream>
#include <climits>

using namespace std;


void printarray(int arr[], int size){
     for(int i=0;i<size;i++){
          cout<<arr[i]<<" ";
     }
     return;
}

int getmin(int arr[], int size){
     int min = INT_MAX;
     for(int i=0;i<size;i++){
          if(arr[i]<min){
               min = arr[i];
          }
     }
     return min;
}

int getmax(int arr[], int size){
     int max = INT_MIN;
     for(int i=0;i<size;i++){
          if(arr[i]>max){
               max = arr[i];
          }
     }
     return max;
}

int main () {
     // int n = min(5, 10);
     // int m = max(5, 10);
     // printf("min : %d\n", n);
     // printf("max : %d\n",m);
     // return 0;
     int size;
     cout << "Enter the size of the array: ";
     cin >> size;
     int arr[100];

     for(int i=0;i<size;i++){
          cin>>arr[i];
     }

     cout << "Array: ";
     printarray(arr, size);
     cout << endl;
     int min = getmin(arr, size);
     cout << "Min: " << min << endl;
     int max = getmax(arr, size);
     cout << "Max: " << max << endl;
     cout<<endl;
     return 0;
}
