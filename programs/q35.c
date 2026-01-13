/* C program to find GCD of 2 numbers */
#include <stdio.h>
int gcd(int , int);
int main()
{
    int a,b, c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    
    c = gcd(a,b);
    printf("GCD of the following number is: %d",c);
    return 0;
}
int gcd ( int a , int b)
{
    if(b == 0 )
    {
        return a;
    }
    else
    {
       return gcd (b,a%b);
    }
}
/*
Enter 1st number: 1
Enter 2nd number: 2
GCD of the following number is: 1
*/  
