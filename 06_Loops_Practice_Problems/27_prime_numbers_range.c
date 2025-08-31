// Program to print all prime numbers within a given range.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, count = 0, num = 2;

    printf("Enter how many prime numbers you want to print : ");
    scanf("%d", &n);

    printf("First %d prime numbers are -:\n", n);

    while (count < n)
    {
        bool isPrime = true;

        for (int i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    printf("\n");
    return 0;
}