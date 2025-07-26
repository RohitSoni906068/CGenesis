// Keep taking numbers as input from the user until an odd number is entered.

#include <stdio.h>

int main()
{
    int number;

    printf(" Enter only even numbers.\n");

    do
    {
        printf(" Enter a new number : ");
        scanf(" %d", &number);
    } while (number % 2 == 0);

    printf(" %d is not an even number.\n", number);

    return 0;
}