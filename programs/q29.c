/* WACPP for : Initialization, Assignmnet and Pasing to Function OF STRUCTURE */
#include <stdio.h>
#include <string.h>

//Stucture definition
 struct student{
     int id;
     char name[20];
     float marks;
 };
 //Function declaration
 void display(struct student s); //pass by value
 void updatemarks(struct student *s, float m); //pass by reference(using pointer)
 
 int main()
 {
     //Initialization (after declaration)
     struct student s1 = {101,"Ayesha", 89.5};
     
     //Assignment (after declaration)
     struct student s2;
     s2.id = 102;
     strcpy(s2.name,"Shaili");
     s2.marks = 85.6;
     
     // Passing structure to function (by value)
     printf("Before updating: \n");
     display(s1);
     display(s2);
     
    // Passing structure by reference(using arrow operator)
    updatemarks(&s1, 94.0); //modify s1's marks
    updatemarks(&s2, 89.7); //modify s2's marks
    printf("\nAfter updatung marks: \n");
    display(s1);
    display(s2);
    
    return 0;
 }
 // Function to diplay structure (pass by value)
 void display(struct student s)
 {
     printf("ID: %d\nName: %s\nMarks: %2f\n",s.id,s.name,s.marks);
}
// Functionto update marks (pass by reference)
void updatemarks(struct student *s,float m)
{
    s->marks = m;  //using arrow operator
}
/*
Before updating: 
ID: 101
Name: Ayesha
Marks: 89.500000
ID: 102
Name: Shaili
Marks: 85.599998

After updatung marks: 
ID: 101
Name: Ayesha
Marks: 94.000000
ID: 102
Name: Shaili
Marks: 89.699997
*/
