#include <stdio.h>

int main () {
    int n;
    printf("enter the no. : ");
    scanf("%d",&n);
    int min= 0;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=2*n-1;j++){
            int a=i;
            if(a>n){ 
                a=2*n-i;
            }
            int b=j;
            if(b>n){ 
                b=2*n-j;
            }
            if(a<b){
                min = a;
            } 
            else {
                min = b;
            }
            int m=n+1-min;
            printf("%d ",m);
        }
        printf("\n");
    }
    return 0;
}