// Take positive integer input and tell if it is a three digit number or not.
#include <stdio.h>
int main()
{
    int number;
    printf(" Enter Number : ");
    scanf(" %d", &number);
    if (number > 99 && number < 1000)
    {
        printf(" Yes, %d is three digit Number\n", number);
    }
    else
    {
        printf(" %d is not three digit Number\n", number);
    }
    return 0;
}