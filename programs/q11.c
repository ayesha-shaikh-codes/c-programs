/* To find the factorial of a number using for loop */
#include <stdio.h>
int main() {
    int n, fact=1,i;
    printf("Enter the number ypu want to find the factorial of:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
      fact*=i;
    }
    printf("The factorial of %d is %d",n,fact);
    return 0;
}
/*
Enter the number ypu want to find the factorial of: 5
The factorial of 5 is 120
*/
