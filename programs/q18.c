/* Write a C program to store and display marks of 5 students */
#include <stdio.h>
int main() 
{
    int marks[5]; // Array declaration
    int i;

    printf("Enter marks of 5 students:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &marks[i]); // Taking input
    }

    printf("\nMarks of students:\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d: %d\n", i+1, marks[i]); // Printing array elements
    }

    return 0;
}
/*
Enter marks of 5 students:
78
88
79
81
89

Marks of students:
Student 1: 78
Student 2: 88
Student 3: 79
Student 4: 81
Student 5: 89
*/
