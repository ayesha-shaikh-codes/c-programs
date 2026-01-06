/* Fibonocci Series*/

#include <stdio.h>
int main() 
{
int n,i,n1=0,n2=1,n3;
printf("Enter number you want to print: ");
scanf("%d",&n);
printf("Fibonocci Series: ");
printf("%d%d",n1,n2);
for(i=2;i<n;i++)
{
    n3=n1+n2;
    printf("%d",n3);
    n1=n2;
    n2=n3;
}
    return 0;
}

/*
Enter number you want to print: 5
Fibonocci Series: 01123
*/ 
