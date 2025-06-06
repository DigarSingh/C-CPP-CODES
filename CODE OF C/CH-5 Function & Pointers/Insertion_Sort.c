#include <stdio.h>

void InsertionSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int n;

    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d element of array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n");

    printf("Array before soting \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    InsertionSort(arr,n);

    printf("Array after soting \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}