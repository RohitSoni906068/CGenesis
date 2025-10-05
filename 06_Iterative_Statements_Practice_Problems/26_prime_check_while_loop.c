// Program to check whether a given number is prime or not using while loops.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int num;
    bool Is_Prime = true;

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
    
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
        {
            printf("%d is Composite Number.\n", num);
            Is_Prime = false;
            break;
        }
        i++;
    }

    if (Is_Prime)
    {
        printf("%d is Prime Number.\n", num);
    }

    return 0;
}
