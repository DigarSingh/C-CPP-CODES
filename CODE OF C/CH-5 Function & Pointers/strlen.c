#include <stdio.h>

int strlen(char str[]){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}
int main(){
    char str[] = "Digar Singh";
    
    printf("%d",strlen(str));
}