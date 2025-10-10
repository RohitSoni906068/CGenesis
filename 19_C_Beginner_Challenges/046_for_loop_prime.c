// Program using for to display if a number is prime or not.
#include <stdio.h>

int main()
{
    printf("Welcome to Prime or Composite Checker\n");
    int number;

    printf("Enter the Number : ");
    scanf("%d", &number);

    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            printf("%d is a Composite Number\n", number);
            return 0;
        }
    }

    printf("%d is a Prime Number\n", number);
    return 0;
}