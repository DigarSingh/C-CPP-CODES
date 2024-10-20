#include <stdio.h>

int main() {
    int n;
    printf("enter the no. of rows : ");
    scanf("%d",&n);

    char ch;

    for(int i=1;i<=n;i++){
        int a=0;
        for(int j=1;j<=n;j++){
            printf("%c ",a+65);
            a++;
        }
        printf("\n");
    }
    return 0;
}