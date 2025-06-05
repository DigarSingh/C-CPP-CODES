#include <stdio.h>

int strlen(char str[]){
    int i=0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
}

int isPalindrome(char str[]){
    int start = 0;
    int end = strlen(str) -1;

    while(start < end){
        if(str[start] != str[end]){
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}
int main(){
    char str[100];

    printf("Enter a string: ");
    scanf("%s",str);

    if(isPalindrome(str)){
        printf("'%s' is a Palindrom.\n",str);
    }
    else{
        printf("'%s' is not a Palindrom.\n",str);
    }
}