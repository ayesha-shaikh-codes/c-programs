/* Write a program to display palindrome of a given number */
#include <stdio.h>
int main() {
    int rev=0,digit,n,temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;
    do
    {
     digit = n%10;
     rev = rev*10 + digit;
     n/=10;
    }
    while (n!=0);
    printf("Original Number : %d\n", temp);
    printf("Reversed Number : %d\n", rev);
          
     return 0;
}
