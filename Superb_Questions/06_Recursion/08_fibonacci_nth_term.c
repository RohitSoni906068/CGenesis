// Recursive function to calculate the nth Fibonacci number.
#include <stdio.h>

int fibonacci_sequence(int n)
{
    return (n == 0 || n == 1) ? n : fibonacci_sequence(n - 1) + fibonacci_sequence(n - 2);
}

int main()
{
    int n_terms;
    
    printf("Enter which term of Fibonacci series you want to print : ");
    scanf("%d", &n_terms);

    // Handle invalid ranges/Edge cases
    if (n_terms < 0)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }
    
    int fibonacci_term = fibonacci_sequence(n_terms);
    printf("%dth term of Fibonacci series is : %d\n", n_terms, fibonacci_term);

    return 0;
}