/* C program to check if a word is a palindrome */
#include <stdio.h>
int main()
{
    char str[100], rev[100];
    int i,j, len=0;
    printf("Enter a word: ");
    scanf("%s", str);
    while(str[len]!='\0'){
        len++;
    }
    for(i=0 , j=len-1;i<len; i++,j--){
        rev[i] = str[j];
    }
    rev[i] = '\0';
    int ispalindrome = 1;
    for(i=0;i<len;i++){
        if(str[i]!=rev[i]){
            ispalindrome=0;
            break;
        }
    }
    printf("Reversed string: %s\n", rev);
    if(ispalindrome){
        printf("The string is a Palindrome!");
    }
    else{
        printf("The string is not a Palindrome");
        }
    return 0;
}
/*
Enter a word: wow
Reversed string: wow
The string is a Palindrome!
*/
