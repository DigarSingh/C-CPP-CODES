#include <stdio.h>

int main () {
    int n;
    printf("enter the no. of rows : ");
    scanf("%d",&n);
    int nsp = 1;
    int nst = n;
    
    for(int i=1;i<=2*n+1;i++){
            printf("%d",i);
        }
        printf("\n");
    for(int i=1;i<=n;i++){
        int a=1;
        for(int k=1;k<=nst;k++){
            printf("%d",a);
            a++;
        }
        for(int j=1;j<=nsp;j++){
            printf(" ");
            a++;
        }
        for(int k=1;k<=nst;k++){
            printf("%d",a); 
            a++;    
        }
        nst--;
        nsp+=2;
        printf("\n");
    }
    return 0;
}