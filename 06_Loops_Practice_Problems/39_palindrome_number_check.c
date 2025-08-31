// Program to check whether a given number is a palindrome.
#include <stdio.h>

int main()
{
    int number, reversed = 0;

    printf("Enter a number : ");
    scanf("%d", &number);

    int original = number; // Store the original number for display

    while (number > 0)
    {
        reversed = (reversed * 10) + (number % 10);
        number /= 10;
    }

    if (original == reversed)
    {
        printf("%d is a palindrome number.\n", original);
    }
    
    else
    {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}