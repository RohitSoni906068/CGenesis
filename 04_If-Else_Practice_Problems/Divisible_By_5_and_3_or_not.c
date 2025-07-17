// Take positive integer input and tell if it is divisible by 5 and 3 without using nested if.
#include <stdio.h>
int main()
{
    int num;
    printf(" Enter Number : ");
    scanf(" %d", &num);
    if (num % 3 == 0)
    {
        if (num % 5 == 0)
        {
            printf(" %d is Divisible by Both 3 and 5.\n", num);
        }
        else
        {
            printf(" %d is Divisible by only 3.\n", num);
        }
    }
    else if (num % 5 == 0)
    {
        printf(" %d is Divisible by only 5.\n", num);
    }
    else
    {
        printf(" %d is not Divisible by both 3 and 5.\n", num);
    }
    return 0;
}
