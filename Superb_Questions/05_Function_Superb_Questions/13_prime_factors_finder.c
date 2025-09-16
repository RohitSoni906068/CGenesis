// Function to find and display the prime factors of a given number.
#include <stdio.h>

int is_prime(int num) // Returns 1 if the number is prime, 0 otherwise
{
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return 0;
    }
    
    return 1;
}

void prime_factors(int number) 
{
    printf("Prime factors of %d are : ", number);

    for (int i = 2; i <= number; i++)
    {
        if (number % i == 0 && is_prime(i))
        {
            printf("%d ", i); // Prints the distinct prime factors of the given number
        }
    }
 
    printf("\n");
}

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    (n <= 1) ? printf("No prime factors for numbers less than or equal to 1.\n") : prime_factors(n);
    
    return 0;
}