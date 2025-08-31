// Program to print the sum of digits of a given number plus the sum of digits of its reverse.
#include <stdio.h>

int main()
{
    int num, sum_of_num = 0, reversed = 0, sum_of_reversed = 0;

    printf("Enter a number to calculate the sum of its digits plus the sum of digits of its reverse : ");
    scanf(" %d", &num);
    
    int original = num;

    // Step 1: Calculate the sum of digits and the reverse of the original number
    while (num > 0)
    {
        int digit = num % 10;
        sum_of_num += digit;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    // Step 2: Calculate the sum of digits of the reversed number
    int temp = reversed;
    while (temp > 0)
    {
        sum_of_reversed += temp % 10;
        temp /= 10;
    }

    // Output
    printf("The sum of digits of %d is : %d\n", original, sum_of_num);
    printf("The sum of digits of its reverse (%d) is : %d\n", reversed, sum_of_reversed);
    printf("Total sum : %d\n", sum_of_num + sum_of_reversed);
    return 0;
}