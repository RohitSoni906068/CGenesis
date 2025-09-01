// Function to find the nth Fibonacci number.
#include <stdio.h>

int Fibonacci(int term)
{
    if (term == 1)
    {
        return 1;
    }

    int previous_term = 0;
    int last_previous_term = 1;
    int fibonacci_term = 0;

    for (int i = 2; i <= term; i++)
    {
        fibonacci_term = previous_term + last_previous_term;
        previous_term = last_previous_term;
        last_previous_term = fibonacci_term;
    }

    return fibonacci_term;
}

int main()
{
    int term;
    printf("Enter which term of the Fibonacci series you want : ");
    scanf(" %d", &term);
    
    printf("The %d term of the fibonacci series is : %d\n", term, Fibonacci(term));
    return 0;
}