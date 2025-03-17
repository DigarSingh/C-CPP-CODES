#include <stdio.h>

void printArray(int arr[],int size){
     for(int i=0;i<size;i++){
          printf("%d ",arr[i]);
     }
     printf("\n");
}
void reverseArray(int arr[],int size){
     int start = 0, end = size-1, temp;
     while(start<end){
          temp = arr[start];
          arr[start] = arr[end];
          arr[end] = temp;
          
          start++;
          end--;
     }
}
int main(){
     int arr[]={1,2,3,4,5,6};
     int size = sizeof(arr)/sizeof(arr[0]);

     printf("Original Array");
     printArray(arr,size);
     printf("\n");
     
     reverseArray(arr,size);
     printf("Reversed Array");
     printArray(arr,size);

}