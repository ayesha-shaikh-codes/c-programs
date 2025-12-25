/* Program to display a 2x2 matrix */
#include <stdio.h>
int main() {
    //initializing 2x2 matrix
    int matrix[2][2];
    printf("Enter elements for 2x2 matrix:\n");
    //taking input of array
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    // printing array
    printf("\nMatrix Elements:\n");
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 2; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
