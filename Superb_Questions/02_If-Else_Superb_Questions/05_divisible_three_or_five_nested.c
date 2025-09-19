// Program to determine if a given positive integer is divisible by 5 or 3 but not divisible by 15 using nested if statements.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("%d is divisible by 5 and 3 and also divisible by 15.\n", num);
    }

    else if (num % 3 == 0)
    {
        printf("%d is divisible by 3 but not divisible by 5.\n", num);
    }

    else
    {
        if (num % 5 == 0)
        {
            printf("%d is divisible by 5 but not divisible by 3.\n", num);
        }
        else
        {
            printf("%d is not divisible by 3,5 and also not divisible by 15.\n", num);
        }
    }
    
    return 0;
}