// Write a program to print from first to nth term of fibonacci series
#include <stdio.h>
int main()
{
    int term;
    printf(" Enter which term of the Fibonacci series you want : ");
    scanf(" %d", &term);
    int previous_term = 0;
    int last_previous_term = 1;
    int fibonacci_term = 0;
    printf(" The is You Fibonacci Series 0th Term to %dth Term -> ", term);

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