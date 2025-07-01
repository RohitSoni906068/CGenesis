// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15 using logical oprators.
#include <stdio.h>
int main()
{
    int num;
    printf(" Enter Number : ");
    scanf(" %d", &num);
    if ((num % 5 == 0 || num % 3 == 0) && num % 15 != 0)
    {
        printf(" %d is divisible by 3 or 5 but not divisible by 15.\n", num);
    }
    else
    {
        printf(" %d is either not divisible by 3 or 5 or it is divisible by 15.\n", num);
    }
    return 0;
}