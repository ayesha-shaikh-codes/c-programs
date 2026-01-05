/* C progarm on Arithmatic operators using Switch Case*/
#include <stdio.h>
int main() 
{
int a,b,operators;

printf("Enter 1st number: ");
scanf("%d",&a);
printf("Enter 2nd number: ");
scanf("%d",&b);
  
// Display Options 
printf("1. Sum\n");
printf("2. Difference\n");
printf("3. Multiplication\n");
printf("4. Division\n");
scanf("%d",&operators);

switch(operators)
{
case 1:
       printf("Sum of %d and %d is: %d", a,b, a+b);
       break;
       
case 2:
       printf("Difference  of %d and %d is: %d", a,b, a-b);
       break;
       
 case 3:
       printf("Multiplication of %d and %d is: %d", a,b, a*b);
       break;
       
case 4:
       printf("Division of %d and %d is: %d", a,b, a/b);
       break;
       
default:
printf("Enter correct choice.");
}
    return 0;
}

/*
Enter 1st number: 70
Enter 2nd number: 30
1. Sum
2. Difference
3. Multiplication
4. Division
3
Multiplication of 70 and 30 is: 2100
*/
