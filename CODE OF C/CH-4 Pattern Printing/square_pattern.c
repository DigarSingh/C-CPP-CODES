#include <stdio.h>

int main() {
    int rows,col;

    printf("enter the no. of rows : ");
    scanf("%d",&rows);

    for(int i=1;i<=rows;i++){
        for(int i=1;i<=rows;i++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}