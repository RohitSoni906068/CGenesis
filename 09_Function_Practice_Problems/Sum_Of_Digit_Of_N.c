// Function to compute the sum of digits of a number
#include <stdio.h>

int sum_of_digits(int number)
{
    int sum = 0;
    while (number != 0)
    {
        int digit = number % 10;
        sum += digit;
        number /= 10;
    }
    return sum;
}

int main()
{
    int num;

    printf(" Enter a number : ");
    scanf(" %d", &num);

    printf(" The sum of digits of %d is : %d\n", num, sum_of_digits(num));

    return 0;
}