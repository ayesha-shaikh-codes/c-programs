/* Bitwise Operators*/
#include <stdio.h>

int main() {
    int a,b;
    printf("Enetr two Numbers");
    scanf("%d %d",&a,&b);
  
    // Bitwise AND
    printf("a & b: %d\n", a & b);
    // Bitwise OR
    printf("a | b: %d\n", a | b);
    // Bitwise XOR
    printf("a ^ b: %d\n", a ^ b);
   // Bitwise First Complement
    printf("~a: %d\n", ~a);
   // Bitwise Rightshift
    printf("a >> b: %d\n", a >> b);
   // Bitwise Leftshift
    printf("a << b: %d\n", a << b);

    return 0;
}
