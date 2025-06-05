#include <stdio.h>

int main(){
    int n,count = 0;
    float sum = 0, avg;
    printf("Enter the size of array: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d element of array: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum += arr[i];
    }

    avg = sum/n;

    for(int i=0;i<n;i++){
        if(arr[i] > avg){
            count++;
        }
    }
    printf("The Average is = %.2f\n",avg);
    printf("Number of elements greater than average = %d\n",count);
}