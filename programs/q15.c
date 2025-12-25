/* C Program to print all odd numbers from 1 to 20 using continue */
#include <stdio.h>
int main()
{
    int i;
    printf("The odd numbers from 1 to 20 are:\n");
    for (i = 1; i <= 20; i++) 
    {
        if(i%2 == 0)
        {
            continue;
        }
        else
        {
            printf("%d\n",i);
        }
    
    }
    return 0;
}
/*
The odd numbers from 1 to 20 are:
1
3
5
7
9
11
13
15
17
19
  */
