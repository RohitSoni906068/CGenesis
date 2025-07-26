// Write a program to printing sum of n to its reverse.
#include <stdio.h>

int main()
{
    int n, reversed = 0;

    printf(" Enter a number : ");
    scanf(" %d", &n);

    int originalNumber = n;

    while (n > 0)
    {
        reversed = (reversed * 10) + (n % 10);
        n /= 10;
    }

    printf(" The sum of %d and its reverse %d is : %d\n",originalNumber, reversed, originalNumber + reversed);

    return 0;
}