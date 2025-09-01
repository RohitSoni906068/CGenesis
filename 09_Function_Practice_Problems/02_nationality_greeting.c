// Function that prints "Namaste" if the user is Indian or "Bonjour" if the user is French.
#include <stdio.h>

void printGreeting(char origin)
{
    if (origin == 'I')
    {
        printf(" Namaste\n");
    }
    
    else if (origin == 'F')
    {
        printf(" Bonjour\n");
    }
    
    else
    {
        printf(" Invalid input.\n");
    }
}

int main()
{
    char userOrigin;

    printf("Enter 'I' if you are from India or 'F' if you are from France : ");
    scanf("%c", &userOrigin);
    
    printGreeting(userOrigin); // Function call

    return 0;
}