#include <stdio.h>

long long factorial(int a){
    long long fact = 1;

    for(int i = 1;i <= a;i++){
        fact *= i;
    }
    return fact;
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