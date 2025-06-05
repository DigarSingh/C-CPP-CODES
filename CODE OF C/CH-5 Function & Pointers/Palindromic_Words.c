#include <stdio.h>
#include <string.h>

int isPalindrome(char word[]){
    int i,j;
    int len = strlen(word);

    for(int i=0,j =len-1;i<j;i++,j--){
        if(word[i] != word[j]){
            return 0;
        }
    }
    return 1;
}
int main(){
    char sentence[100],word[50];
    int i = 0,j = 0;

    printf("Enter the sentence: ");
    fgets(sentence, sizeof(sentence), stdin); 

    // remove trailing newline if exists
    size_t len = strlen(sentence);
    if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }
    printf("Palindrome Words:\n");

    while (1) {
        char ch = sentence[i];
        if (ch != ' ' && ch != '\0') {
            word[j++] = ch;
        } else {
            word[j] = '\0';  // null-terminate
            if (j > 0 && isPalindrome(word)) {
                printf("%s\n", word);
            }
            j = 0;  // reset for next word
        }
        if (ch == '\0')
            break;
        i++;
    }

    return 0;
}