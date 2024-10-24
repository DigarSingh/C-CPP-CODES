#include <stdio.h>

int main() {
    int n;
    printf("enter the no. : ");
    scanf("%d",&n);
    
    int nst=1;

    for(int i=1;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        for(int l=1;l<=i-1;l++){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}    