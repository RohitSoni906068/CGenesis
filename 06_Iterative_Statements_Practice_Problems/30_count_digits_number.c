// Program to count the digits of a given number.
#include <stdio.h>

int main()
{
    int number, digit_count = 0;

    printf("Enter a number to count its digits : ");
    scanf("%d", &number);

    int original = number; // Store original value for display

    while (number > 0)
    {
        digit_count++;
        number /= 10;
    }

    printf("The number of digits in %d is : %d\n", original, digit_count);
    return 0;
}
