#include <stdio.h>

int main() {

    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    // Arithmatic Operators
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a % b = %d\n", a % b);
    printf("+a = %d\n", +a);
    printf("-a = %d\n", -a);
    printf("a++ = %d\n", a++);
    printf("a-- = %d\n", a--);

    return 0;
}
/*
Enter 1st number: 25
Enter 2nd number: 20
a + b = 45
a - b = 5
a * b = 500
a / b = 1
a % b = 5
+a = 25
-a = -25
a++ = 25
a-- = 26
*/

