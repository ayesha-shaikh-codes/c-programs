/* program to stop loop when the number is n */ 
#include <stdio.h>
int main() {
    int i,n;
    printf(" Enter a number:");
    scanf("%d", & n);
    for (i = 1; i <= n; i++) {
        if(i == n)
            break;
        printf("%d ", i,n);
    }
    return 0;
}
/*
Enter a number:8
1 2 3 4 5 6 7 
*/
