/* WACP Store and Display Data of 3 Employees USING ARRAY IN STRUCTURE */
#include <stdio.h>

 struct employee
 {
     int id;
     char name[100];
     float salary;
 };
 
 int main()
 {
     struct employee e[3];
     //input details of 3 employees
     printf("Enter details of the three employees: \n");
     for( int i=0;i<3;i++){
         printf("Enter name of employee %d: ",i+1);
         scanf("%s", e[i].name);
         printf("Enter ID number of the employee %d:", i+1);
         scanf("%d",&e[i].id);
         printf("Enter Salary of the employee%d: ", i+1);
         scanf("%f",&e[i].salary);
 }
 // Display Details
printf("\n----- Employee Details -----\n");
for(int i=0; i<3; i++)
{
printf("\nName: %s", e[i].name);
printf("\nID: %d", e[i].id);
printf("\nSalary: %2f", e[i].salary);
}
return 0;
}
/*
Input: 
Enter details of the three employees: 
Enter name of employee 1: Ayesha
Enter ID number of the employee 1:100
Enter Salary of the employee1: 70000
Enter name of employee 2: Laaiba
Enter ID number of the employee 2:101
Enter Salary of the employee2: 65000
Enter name of employee 3: Priyanka
Enter ID number of the employee 3:102
Enter Salary of the employee3: 75000

Output: 
----- Employee Details -----

Name: Ayesha
ID: 100
Salary: 70000.000000
Name: Laaiba
ID: 101
Salary: 65000.000000
Name: Priyanka
ID: 102
Salary: 75000.000000
*/
