/* To find if a number is even or odd using if-else*/
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Even number\n");
    } else {
        printf("Odd number\n");
    }

    return 0;
}
