// Program that prompts the user to enter a positive number. 
// Use a do-while loop to keep asking for the number until the user enters a valid positive number.
#include <stdio.h>

int main()
{
    printf("Welcome to Persistence Number Checker\n");
    int number;

    do
    {
        printf("Enter the Positive Number : ");
        scanf("%d", &number);
    } while (number <= 0);
    
    printf("You have sucessfully entered a Positive Number\n", number);
    return 0;
}