#include <stdio.h>

int isPalindrome(int num){
    int rev = 0,original = num,ld;

    while(num != 0){
        ld = num % 10;
        rev = rev * 10 + ld;
        num /= 10;
    }
    if(original == rev){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    if(isPalindrome(num)){
        printf("'%d' is a Palindrom.\n",num);
    }
    else{
        printf("'%d' is not a Palindrom.\n",num);
    }
    return 0;
}
