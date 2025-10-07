// Program to sum all odd numbers from 1 to a specified number N.
#include <stdio.h>

int main()
{
    printf("Welcome to Summing Odd Numbers\n");
    int N, Odd_Sum = 0;

    printf("Enter the Value of N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i += 2)
    {

        Odd_Sum += i;
    }

    printf("Sum all Odd Numbers from 1 to %d is : %d\n", N, Odd_Sum);
    return 0;
}