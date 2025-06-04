#include <stdio.h>

long long factorial(int n){
    if(n == 1 || n == 0){
        return 1;
    }
    return n * factorial(n-1);
}
int main(){
    int n;
    printf("Enter The Number: ");
    scanf("%d",&n);

    if(n < 0){
        printf("facorial is not defined for negative numbers.\n");
    }
    else{
        printf("Factorial of %d = %lld\n",n,factorial(n));
    }
    return 0;
}