// Program to print the nth term of the Fibonacci series.
#include <stdio.h>

int main()
{
    int term;
    printf("Enter which term of the Fibonacci series you want : ");
    scanf("%d", &term);
    
    int previous_term = 0;
    int last_previous_term = 1;
    int fibonacci_term = 0;
    
    if (term <= 0 || term == 1)
    {
        if (term == 0)
        {
            printf("The 0th term of the Fibonacci series is : %d.\n", previous_term);
        }
        else if (term == 1)
        {
            printf("The 1st term of the Fibonacci series is : %d.\n", last_previous_term);
        }
        else
        {
            printf("Invalid term. Please enter a positive integer.\n");
        }
        return 0;
    }
    
    for (int i = 2; i <= term; i++)
    {
        fibonacci_term = previous_term + last_previous_term;
        previous_term = last_previous_term;
        last_previous_term = fibonacci_term;
    }
    printf("The %dth term of the Fibonacci series is : %d.\n", term, fibonacci_term);

    return 0;
}