/* Write a C program to display initialized one dimensional array */
#include <stdio.h>
int main() 
{
    int numbers[5] = {10, 20, 30, 40, 50}; // Initialization
    printf("Initialized Array Elements:\n");

    for(int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }

    return 0;
}
