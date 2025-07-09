// Program to print the reverse of a given number
#include <stdio.h>
int main()
{
    int num;
    printf(" Enter an integer : ");
    scanf(" %d", &num);

    int original = num; // Store the original number for display
    int reversedNumber = 0;

    while (num > 0)
    {
        reversedNumber = (reversedNumber * 10) + (num % 10);
        num /= 10;
    }

    printf(" The reverse of %d is : %d\n", original, reversedNumber);
    return 0;
}