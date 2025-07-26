// Write a program to print nth term of fibonacci series
#include <stdio.h>
int main()
{
    int term;
    printf(" Enter which term of the Fibonacci series you want : ");
    scanf(" %d", &term);
    int previous_term = 0;
    int last_previous_term = 1;
    int fibonacci_term = 0;
    if (term == 0 || term == 1)
    {
        if (term == 0)
        {
            printf(" 0th term of the Fibonacci series is : %d.\n", previous_term);
        }
        else
        {
            printf(" 1st term of the Fibonacci series is : %d.\n", last_previous_term);
        }
        return 0;
    }
    for (int i = 2; i <= term; i++)
    {
        fibonacci_term = previous_term + last_previous_term;
        previous_term = last_previous_term;
        last_previous_term = fibonacci_term;
    }
    printf(" %dth term of the Fibonacci series is : %d.\n", term, fibonacci_term);
    return 0;
}