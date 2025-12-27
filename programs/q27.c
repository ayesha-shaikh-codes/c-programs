/* C prgram for Accessing structure member using dot operator and arrow operator */
#include <stdio.h>
struct student
{
    int roll;
    char name[100];
    float marks;
};

int main(){
struct student s1;
printf("Enter student name: ");
scanf("%s", s1.name);
printf("Enter student roll no: ");
scanf("%d",&s1.roll);
printf("Enter student's marks: ");
scanf("%f",&s1.marks);

//using dot operator
printf("Name of s1: %s\n",s1.name);
printf("Roll number of s1: %d\n",s1.roll);
printf("Marks of s1: %2f\n",s1.marks);

//using arrow operator
struct student *ptr = &s1;
printf("Name of s1: %s\n", ptr -> name);
printf("Roll number of s1: %d\n",ptr -> roll);
printf("Marks of s1: %2f\n",ptr -> marks);

    return 0;
}
