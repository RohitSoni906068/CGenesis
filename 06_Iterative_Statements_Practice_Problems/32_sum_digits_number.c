// Program to calculate the sum of digits of a given number.
#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter a number to calculate the sum of its digits : ");
    scanf("%d", &num);

    int original = num; // Store the original number for display

    while (num > 0)
    {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of digits of %d is : %d\n", original, sum);
    return 0;
}