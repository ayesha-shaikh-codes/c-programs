/* Program for Menu-driven loop */
#include <stdio.h>
int main() {
    int choice;
    do {
        printf("\n1. Hello\n2. Greet\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Hello, World!\n");
        }
        else if (choice == 2) {
            printf("What's up?\n");
            }

    } while (choice != 3);

    return 0;
}
/* 
1. Hello
2. Greet
3. Exit
Enter your choice: 2
What's up?
  */
