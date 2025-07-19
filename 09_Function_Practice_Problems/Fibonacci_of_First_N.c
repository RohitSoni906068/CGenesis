// Write a Function to display fibonacci of numbers from 0 to 'limit' term.
#include <stdio.h>
void Fibonacci(int term)
{
    int previous_term = 0;
    int last_previous_term = 1;
    int fibonacci_term = 0;
    printf(" The 0th Term of Fibonacci Series is : %d\n", previous_term);
    printf(" The 1st Term of Fibonacci Series is : %d\n", last_previous_term);
    for (int i = 2; i <= term; i++)
    {
        fibonacci_term = previous_term + last_previous_term;
        previous_term = last_previous_term;
        last_previous_term = fibonacci_term;
        printf(" The %d Term of Fibonacci Series is : %d\n", i, fibonacci_term);
    }
    return;
}
int main()
{
    int limit_term;
    printf(" Enter which term of the Fibonacci series you want : ");
    scanf(" %d", &limit_term);
    Fibonacci(limit_term);
    return 0;
}