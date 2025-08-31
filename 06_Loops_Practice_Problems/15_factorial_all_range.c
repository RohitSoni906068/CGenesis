// Program to print the factorial of all numbers within a given range.
#include <stdio.h>

int main()
{
    int start, end;

    printf("Enter starting number for factorials : ");
    scanf("%d", &start);

    printf("Enter ending number for factorials : ");
    scanf("%d", &end);
    
    for (int i = start; i <= end; i++)
    {
        int factorial = 1;
        for (int j = 1; j <= i; j++)
        {
            factorial *= j;
        }
        printf("The factorial of %d is : %d\n", i, factorial);
    }

    return 0;
}
