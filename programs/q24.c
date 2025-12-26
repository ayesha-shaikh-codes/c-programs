/* C program for function in c with arguments and return value */
#include <stdio.h>

// Function declaration
int add(int, int);

int main()
{
    int a,b,c;
    printf("Enter two integers: ");
    scanf("%d %d",&a,&b);

    // Function call
    c = add(a, b);

    printf("Sum = %d", c);
    return 0;
}

// Function definition
int add(int x, int y)
{
    int sum;
    sum = x + y;
    return sum;
}
/*
Enter two integers: 10 7
Sum = 17
*/
