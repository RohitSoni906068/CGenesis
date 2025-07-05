// Program to print the sum of all odd digits of a given number.
#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf(" Enter a number : ");
    scanf(" %d", &num);

    int original = num; // Preserve the original number for output

    while (num > 0)
    {
        int digit = num % 10;

        if (digit % 2 != 0) // Check if the digit is odd
        {
            sum += digit;
        }

        num /= 10;
    }

    printf(" The sum of odd digits of %d is : %d\n", original, sum);
    return 0;
}