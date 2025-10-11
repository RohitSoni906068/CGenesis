// Program that continuously reads integers from the user and prints their squares. 
// Use an infinite loop and a break statement to exit when a special number (e.g., - 1) is entered.
#include <stdio.h>

int main()
{
    printf("Welcome to World of Squares\n");
    int number;

    while (1)
    {
        printf("Enter the Number : ");
        scanf("%d", &number);

        if (number == -1) break;
        printf("The Square of %d is : %d\n", number, number * number);
        printf("To Stop Press -1\n");
    }

    printf("Bye, Bye!");
    return 0;
}