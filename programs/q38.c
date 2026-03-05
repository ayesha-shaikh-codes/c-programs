/* C program to sort N numbers using Selection Sort */
#include <stdio.h>
void sort(int[],int);
int main() 
{
int a[50],n,i;

    printf("Enter Number of elements: ");
    scanf("%d",&n);
    printf("Enter %d elements: ");
    for(i=0; i<n; i++)
    {
     scanf("%d",&a[i]);
    }
    sort(a,n);
    return 0;
}
void sort(int a[],int n)
{
    int i,j,min, temp;
    for ( i = 0; i < n-1; i++);
    {
        min =i;
        for(j = i + 1; j < n; j++)
        {
            if(a[j] < a[min])
            min = j;
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Sorted Arrays: \n");
    for(i=0; i<n;i++)
    {
        printf("%d",a[i]);
    }
}
/*
Enter Number of elements: 2
Enter 2 elements: 45
12
Sorted Arrays: 
4512
*/  
