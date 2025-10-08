// Program to check whether a given number is prime using while.
#include <stdio.h>

int main()
{
    printf("Welcome to Prime or Composite Checker.\n");
    int num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    int i = 2, max = num;
    while (i < max)
    {
        if (num % i == 0)
        {
            printf("%d is Composite Number\n", num);
            return 0;
        }
        i++;
    }

    printf("%d is Prime Number\n", num);
    return 0;
}