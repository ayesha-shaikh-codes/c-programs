/* To make a calculator using switch case*/
#include <stdio.h>
int main() {
    int choice, a, b;
    printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    switch(choice) {
        case 1: printf("Sum = %d\n", a + b); break;
        case 2: printf("Difference = %d\n", a - b); break;
        case 3: printf("Product = %d\n", a * b); break;
        case 4: printf("Quotient = %d\n", a / b); break;
        default: printf("Invalid choice\n");
    }

    return 0;
}
/* 
1. Addition
2. Subtraction
3. Multiplication
4. Division
Enter your choice: 3
Enter two numbers: 5 4
Product = 20
  */
