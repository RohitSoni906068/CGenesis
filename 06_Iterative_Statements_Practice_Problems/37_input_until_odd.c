// Program to keep taking numbers as input from the user until an odd number is entered.
#include <stdio.h>

int main()
{
    int number;
    printf("Enter even number for continue and odd number for exit : ");

    do
    {
        printf("Enter a new number : ");
        scanf("%d ", &number);
    } while (number % 2 == 0);

    printf("%d is not an even number so you get exit from the loop.\n", number);

    return 0;
}