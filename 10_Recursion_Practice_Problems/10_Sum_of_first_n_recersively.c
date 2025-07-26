// Recursive function to calculate the sum of the first 'n' natural numbers
#include <stdio.h>

int sum_of_natural_numbers(int n);

int main()
{
    int n;
    printf(" Enter a positive integer (n) : ");
    scanf("%d", &n);

    printf(" The sum of the first %d natural numbers is : %d\n", n, sum_of_natural_numbers(n));
    return 0;
}

int sum_of_natural_numbers(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sum_of_natural_numbers(n - 1);
}
