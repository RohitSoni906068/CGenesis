// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15 using nested if.
#include <stdio.h>
int main()
{
    int num;
    printf(" Enter Number : ");
    scanf(" %d", &num);
    if (num % 3 == 0 && num % 5 == 0)
    {
        printf(" %d is Divisible by 5 and 3 But also divisible by 15.\n", num);
    }
    else if (num % 3 == 0)
    {
        printf(" %d is divisible by 3 but not divisilbe by 5.\n", num);
    }
    else
    {
        if (num % 5 == 0)
        {
            printf(" %d is Divisible by 5 but not divisible by 3.\n", num);
        }
        else
        {
            printf(" %d is not Divsible by 3,5 and 15.\n", num);
        }
    }
    return 0;
}