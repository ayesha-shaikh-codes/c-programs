/* C program to concatenate two strings using pointers */
#include <stdio.h>

int main() 
{
    int l = 0;
    char a[100],c[100]; 
    char *b,*d;
    printf("Enter 1st string: ");
    scanf("%s",a);
    printf("Enter 2nd string: ");
    scanf("%s",c);
    b = a;
    while(*b != '\0')
    {
        l++;
        b++;
    }
    d=c;
    while(*d != '\0')
    {
        *b = *d;
        b++;
        d++;
    }
    *b = '\0';
    printf("Concatenated String: %s\n",a);

    return 0;
}
/*
Enter 1st string: ayesha
Enter 2nd string: shaikh
Concatenated String: ayeshashaikh
*/
