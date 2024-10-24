#include <stdio.h>

int main() {
    int n;
    printf("enter the no. of rows : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        int a=0;
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%c",a+65);
            a++;
        }
        printf("\n");
    }
    return 0;
}