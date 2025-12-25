/* Program to demonstrate declaration and element access */
#include <stdio.h>
int main() 
{
    int arr[4]; // Declaration
    arr[0] = 10; // Assigning values
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;

    printf("Array Elements:\n");
    for(int i = 0; i < 4; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    return 0;
}
