/* C program to find lenght of a string */
#include <stdio.h>

int main() 
{
    int l = 0;
    char a[50]; 
    char *b;
    printf("Enter a string: ");
    scanf("%s",a);
    b = a;
    while(*b != '\0')
    {
        l++;
        b++;
    }
    printf("Lenght of string is: %d\n",l);

    return 0;
}

/*
Enter a string: Ayesha
Lenght of string is: 6
*/
