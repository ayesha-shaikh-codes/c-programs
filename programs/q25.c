/* C program to call by value */
#include <stdio.h>

void swap(int x, int y)   // function definition
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Inside function: x = %d, y = %d\n", x, y);
}

int main()
{
    int a = 10, b = 20;
    swap(a, b);   // Call by Value
    printf("Outside function: a = %d, b = %d\n", a, b);
    return 0;
}
