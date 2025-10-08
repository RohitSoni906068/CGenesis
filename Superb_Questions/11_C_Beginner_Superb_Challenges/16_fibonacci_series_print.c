// Program to print the Fibonacci series up to a certain number.
#include <stdio.h>

int main()
{
    printf("Welcome to Printing Fibonacci Series.\n");
    int term;

    printf("Enter the Term Upto which Series should be Printed : ");
    scanf("%d", &term);

    int previous_term = 0;
    int last_previous_term = 1;
    int fibonacci_term = 0;

    printf("This is your Fibonacci Series from 0th Term to %dth Term\n", term);
    printf("%d ", previous_term);
    printf("%d ", last_previous_term);

    for (int i = 2; i <= term; i++)
    {
        fibonacci_term = previous_term + last_previous_term;
        previous_term = last_previous_term;
        last_previous_term = fibonacci_term;
        printf("%d ", fibonacci_term);
    }

    printf("\n");
    return 0;
}