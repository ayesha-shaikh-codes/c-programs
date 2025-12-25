/* Write a C program to find the area of circle */
#include <stdio.h>
int main()
{
    float rad,area;
    printf("Enter the radius of the Circle: ");
    scanf("%f", &rad);
    area = 3.14*rad*rad;
    printf("The area of the circle of radius %.2f units is: %.2f sq.units", rad, area);
    return 0;
}
/*
Enter the radius of the Circle: 5
The area of the circle of radius 5.00 units is: 78.50 sq.units
*/
