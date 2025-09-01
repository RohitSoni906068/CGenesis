// Function to display Fibonacci numbers from the 0th term to the nth term.
#include <stdio.h>

void displayFibonacci(int limit_term)
{   
    printf("Fibonacci Series from 0th term to %dth term -:\n", limit_term);

    int previous_term = 0;
    int last_previous_term = 1;
    int fibonacci_term = 0;

    printf("%d %d ", previous_term, last_previous_term);
    for (int i = 2; i <= limit_term; i++)
    {
        fibonacci_term = previous_term + last_previous_term;
        previous_term = last_previous_term;
        last_previous_term = fibonacci_term;
        
        printf("%d ", fibonacci_term);
    }

    printf("\n");
    return;
}

int main()
{
    int limit_term;
    printf("Enter a last number from 0 to which you want to display the fibonacci series : ");
    scanf(" %d", &limit_term);
    
    displayFibonacci(limit_term);
    return 0;
}