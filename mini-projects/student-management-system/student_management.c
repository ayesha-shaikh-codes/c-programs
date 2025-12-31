/* Student Management System. */
#include <stdio.h>
#include <string.h>

// Structure definition
    #define MAX 50
    #define TOTAL_MARKS 100
struct Student {
    char name[50];
    int roll;
    float marks;
    float percentage;
};

void addStudents(struct Student s[], int *count)
{ 
     int n;
    printf("Enter number of students: ");
    scanf("%d",&n);
    if (*count + n > MAX)
    {
        printf("Maximum allowed is %d\n",MAX);
     return;
    }

    
    for(int i = 0;i< n;i++)
    {
    
    printf("Enter details of student %d\n: ", *count + 1);
    while (getchar() != '\n'); 
    printf("Enter Name: "); 
    fgets(s[*count].name, sizeof(s[*count].name),stdin);
    s[*count].name[strcspn(s[*count].name,"\n")] = '\0'; 
    printf("Enter Roll No: ");
    scanf("%d", &s[*count].roll);
    printf("Enter Marks: ");
    scanf("%f", &s[*count].marks);
    
   s[*count].percentage = (s[*count].marks/ TOTAL_MARKS) * 100;
   (*count) ++;
    }
}

void displayStudents(struct Student s[], int count)
{
    if (count == 0)
      {
          printf("No student to display");
      }
      else
  {
      printf("\n--- Student Details ---\n");
      for(int i =0;i < count;i++)
    {
      printf("Name    : %s\n", s[i].name);
      printf("Roll No : %d\n", s[i].roll);
      printf("Marks   : %.2f\n", s[i].marks);
      printf("Percentage: %.2f\n", s[i].percentage);
    }
  }
}

void searchStudents(struct Student s[], int count)
{
    int searchroll;
    int found = 0;
    if(count ==0)
     {
        printf("No student to search.\n");
        return;
     }
    printf("Enter Roll no to search: ");
    scanf("%d",&searchroll);
    for (int i=0;i <count;i++)
    {
        if (s[i].roll == searchroll)
      {
        printf("\n=====Student foumd=====\n");
        printf("Name    : %s\n", s[i].name);
        printf("Roll No : %d\n", s[i].roll);
        printf("Marks   : %.2f\n", s[i].marks);
        printf("Percentage: %.2f\n", s[i].percentage);
        found =1;
      }
    }
    if(!found)
    {
        printf("student with roll no %d not found\n",searchroll);
    }
}

void updateStudents(struct Student s[], int count)
{
    int roll;
float newmarks;
int found = 0;

if(count ==0)
{
    printf("No Student available to update\n");
    return;
}
   printf("Enter roll no to update markas: \n");
   scanf("%d",&roll);
   
   for (int i = 0;i < count;i++)
   {
       if (s[i].roll == roll)
       {
           printf("Currrent Marks: %2f\n",s[i].marks);
           printf("Enter new marks: ");
           scanf("%f",&newmarks);
           s[i].marks = newmarks;
           s[i].percentage= (newmarks /TOTAL_MARKS)*100;
           printf("Marks updated succsfully!\n");
           found = 1;
         
       }
    
       
   }
   if (!found)
   {
   printf("Student with roll no %d  ot found\n",roll);
    }
}

void deleteStudents(struct Student s[], int *count)
{
    int roll;
    int found =0;
    
    if (*count == 0)
    {
        printf("No student details to delete\n");
        return;
    }
    printf("Enter roll no to delete: \n");
    scanf("%d",&roll);
    
    for(int i=0;i < *count;i++)
    {
        if(s[i].roll == roll)
        {
            //shift students left
            for(int j = i; j < *count - 1; j++)
            {
                s[j] = s[j +1];
            }
            (*count)--; 
            printf("Student deleted successfully! \n");
            found =1;
            break;
        }
    }
 if (!found)
   {
   printf("Student with roll no %d  ot found\n",roll);
    }
}

int main() {
    int i;
    int total_marks = 100;
    struct Student s[MAX];
    int count = 0; 
    int choice;
    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM=====\n");
        printf("1. Add students\n");
        printf("2. Display students\n");
        printf("3. Search student by roll no\n");
        printf("4. Update student marks\n");
        printf("5. Delete student\n ");
        printf("6. Exit \n");
        scanf("%d",&choice);
    
    
    switch (choice)
    {
 case 1: 
     addStudents(s, &count);
     break;
case 2:
    displayStudents(s,count);  
    break;
    
case 3:
 searchStudents(s, count);
    break;
    
case 4: 
  updateStudents(s, count);
    break;
 
case 5:
   deleteStudents(s, &count);
   break;

case 6:
 printf("Exiting program...\n");
 break;
   
    default:
    printf("Invalid choice. Try again\n");
    break;
    }
    
}   while (choice != 6); 

    return 0;
}
