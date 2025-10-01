// Program that determines if a number is positive, negative, or zero.
#include <stdio.h>

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d", &number);

    if (number >= 1)
    {
        printf("%d is Positive Number.\n", number);
    }

    else if (number == 0)
    {
        printf("Entered number is Zero (%d)\n", number);
    }

    else
    {
        printf("%d is Negative Number.\n", number);
    }

    return 0;
}