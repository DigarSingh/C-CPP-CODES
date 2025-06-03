#include <stdio.h>

int main(){
    int arr[50],n,value,pos;

    printf("Enter the number of Elements: ");
    scanf("%d",&n);

    printf("Enter %d Elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert: ");
    scanf("%d",&value);

    printf("Enter the position to insert at (1 to %d): ",n+1);
    scanf("%d",&pos);

    if(pos < 1 || pos > n+1){
        printf("Invalid Position!");
        return 1;
    }

    for(int i = n;i >= pos;i--){  //Shifting Elements to Right
        arr[i] = arr[i-1];
    }

    arr[pos - 1] = value;
    n++;

    printf("Array after insertion: \n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}