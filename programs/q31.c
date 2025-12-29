/* WACP for Accessing Union Members */
#include <stdio.h>
#include <string.h>

union student
{
    char name[20];
    int roll_no;
};

int main() {
    union student s1;
    //Store and Print Name
    strcpy(s1.name, "Ayesha Shaikh");
    printf("Name: %s\n", s1.name);
    
    //Store and Print Roll no
    s1.roll_no = 10;
    printf("Roll no: %d\n", s1.roll_no);

   return 0;
}
/*
Name: Ayesha Shaikh
Roll no: 10
*/
