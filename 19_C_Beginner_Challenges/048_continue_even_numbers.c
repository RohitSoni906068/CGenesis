// Program using continue to print only even numbers using continue for odd numbers.
#include <stdio.h>

int main()
{
    printf("Welcome to Printing Even Numbers\n");
    int max;

    printf("Enter the Maximum Number : ");
    scanf("%d", &max);

    for (int i = 1; i <= max; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }

        printf("%d ", i);
    }

    printf("\n");
    return 0;
}