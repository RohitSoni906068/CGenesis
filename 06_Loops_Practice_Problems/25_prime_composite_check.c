// Program to check if a number is prime or composite.
#include <stdio.h>

int main()
{
    int num, Is_Prime = 1;

    printf("Enter Number : ");
    scanf("%d", &num);

    if (num == 1 || num <= 0)
    {
        if (num <= 1)
        {
            printf("%d is neither a prime nor composite.\n", num);
        }
        else
        {
            printf("%d is a Invalid Number.\n", num);
        }
        return 0;
    }

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            Is_Prime = 0;
            printf("%d is a Composite Number.\n", num);
            break;
        }
    }

    if (Is_Prime)
    {
        printf("%d is Prime Number.\n", num);
    }
    
    return 0;
}
