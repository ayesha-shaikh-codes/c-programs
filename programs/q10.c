/* To get the sum of first n natural numbers using while loop*/
#include <stdio.h>
int main() {
    int n, i=1,sum=0;
    printf("Enter your limit");
    scanf("%d",&n);
    while(i<=n)
    {
      sum+=i;
      i++;
    }
    printf("%d is the sum of first %d natural numbers!",sum,n);
    return 0;
}
/*
Enter your limit5
15 is the sum of first 5 natural numbers! 
*/
