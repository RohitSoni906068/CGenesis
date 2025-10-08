// Program to find the Greatest Common Divisor (GCD) of two integers.
#include <stdio.h>

int main()
{
    printf("Welcome to Greatest Common Divisor (GCD) Calculator.\n");
    int First, Second;

    printf("Enter the first number : ");
    scanf("%d", &First);

    printf("Enter the second number : ");
    scanf("%d", &Second);

    int Min_num = (First > Second) ? Second : First;
    int GCD = 0;

    for (int i = Min_num; i >= 1; i--)
    {
        if (First % i == 0 && Second % i == 0)
        {
            GCD = i;
            break;
        }
    }

    printf("The Greatest Common Divisor (GCD) of %d and %d is : %d\n", First, Second, GCD);
    return 0;
}