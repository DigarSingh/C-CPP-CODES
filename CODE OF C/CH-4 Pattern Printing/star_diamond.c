#include <stdio.h>

int main (){
    int n;
    printf("enter the no . : ");
    scanf("%d",&n);
    int nst = 1;
    int nsp = n/2;
    int ml = (n/2)+1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
            printf(" ");
        }
        for(int k=1;k<=nst;k++){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");

    }
    return 0;
}