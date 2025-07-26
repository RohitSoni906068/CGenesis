// Write a program to check if the number entered by the user is an Armstrong number.
#include <stdio.h>
int main()
{
    int num, count = 0, last_digit = 0, sum = 0;
    printf(" Enter Number : ");
    scanf(" %d", &num);

    int temp = num;     // Preserving the original number for second step
    int original = num; // Preserve the original number for output

    // Counting number of digits
    while (num > 0)
    {
        count++;
        num /= 10;
    }

    // Calculating sum of digits raised to the power of count
    while (temp > 0)
    {
        last_digit = temp % 10;
        int power = 1;
        for (int i = 1; i <= count; i++)
        {
            power *= last_digit;
        }
        sum += power;
        temp /= 10;
    }

    if (original == sum)
    {
        printf(" %d is Armstrong Number.\n", sum);
    }
    else
    {
        printf(" %d is not Armstrong Number.\n", sum);
    }
    return 0;
}