// WAP to print the sum of Digits of given number to the sum of digits of reverse of given number.
#include <stdio.h>
int main()
{
    int n, sum_of_n = 0, reversed = 0, sum_of_reversed = 0;
    printf(" Enter a number : ");
    scanf(" %d", &n);
    int original = n;

    // Step 1: Calculate the sum of digits and the reverse of the original number
    while (n > 0)
    {
        int digit = n % 10;
        sum_of_n += digit;
        reversed = reversed * 10 + digit;
        n /= 10;
    }

    // Step 2: Calculate the sum of digits of the reversed number
    int temp = reversed;
    while (temp > 0)
    {
        sum_of_reversed += temp % 10;
        temp /= 10;
    }

    // Output
    printf(" The sum of digits of %d is : %d\n", original, sum_of_n);
    printf(" The sum of digits of its reverse (%d) is : %d\n", reversed, sum_of_reversed);
    printf(" Total sum : %d\n", sum_of_n + sum_of_reversed);
    return 0;
}