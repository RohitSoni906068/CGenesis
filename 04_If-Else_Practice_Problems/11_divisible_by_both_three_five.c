// Program to determine if a given positive integer is divisible by both 5 and 3 without using nested if statements.
#include <stdio.h>

int main()
{
    int num;
    printf("Enter Number : ");
    scanf("%d", &num);

    if (num % 3 == 0)
    {
        if (num % 5 == 0)
        {
            printf("%d is divisible by both 3 and 5.\n", num);
        }
        else
        {
            printf("%d is divisible by only 3.\n", num);
        }
    }

    else if (num % 5 == 0)
    {
        printf("%d is divisible by only 5.\n", num);
    }
    
    else
    {
        printf("%d is not divisible by both 3 and 5.\n", num);
    }

    return 0;
}
