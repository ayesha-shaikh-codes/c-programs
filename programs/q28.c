/* C program for Student Details using Nested Structure */
#include <stdio.h>
 struct address{
     char city[20];
     int pin;
 };
 struct student{
     int roll;
     char name[100];
     float marks;
     struct address a;
 };
 
 int main()
 {
     struct student s1;
     printf("Enter student name: ");
     scanf("%s", s1.name);
     printf("Enter student roll no: ");
     scanf("%d",&s1.roll);
     printf("Enter students marks: ");
     scanf("%f", &s1.marks);
     printf("Enter student address city name: ");
     scanf("%s", s1.a.city);
     printf("Enter student address pin code: ");
     scanf("%d",&s1.a.pin);
    
    //using dot operator
    printf("Name of s1: %s\n",s1.name);
    printf("Roll number of s1: %d\n",s1.roll);
    printf("Marks of s1: %2f\n",s1.marks);
    printf("Address of s1: %s %d\n",s1.a.city, &s1.a.pin);
    return 0;
 }
/*
Input:-
Enter student name: Ayesha
Enter student roll no: 10
Enter students marks: 88
Enter student address city name: Pune
Enter student address pin code: 411015

Output:-
Name of s1: Ayesha
Roll number of s1: 10
Marks of s1: 88.000000
Address of s1: Pune -913618048
*/  
