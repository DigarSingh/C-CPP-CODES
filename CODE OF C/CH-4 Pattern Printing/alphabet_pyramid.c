#include <stdio.h>

int main() {
    int n;
    printf("enter the no. : ");
    scanf("%d",&n);
    
    int nst=1;

    for(int i=1;i<=n;i++){
        int a=0;
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=nst;j++){
            printf("%c",a+65);
            a++;
        }
        nst=nst+2;
        printf("\n");
    }
    return 0;
} 
