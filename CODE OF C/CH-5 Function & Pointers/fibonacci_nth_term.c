#include <stdio.h>

// 0 1 1 2 3 5 8 13 21 34 55 89z`
int Fabonacci(int n){
    if(n == 1 || n == 2){
        return (n-1);
    }
    return Fabonacci(n-1) + Fabonacci(n-2);
}

int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);

    printf("The value of fabonacci series at %d is: %d",n,Fabonacci(n));
}