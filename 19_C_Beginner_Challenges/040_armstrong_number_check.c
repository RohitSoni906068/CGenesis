// Program to check if a number is an Armstrong number.
#include <stdio.h>

int main()
{
    printf("Welcome to Armstrong Number Checker\n");
    int num;

    printf("Enter Number : ");
    scanf("%d", &num);

    int temp = num, sum = 0;
    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    (num == sum) ? printf("%d is Armstrong Number.\n", num) : printf("%d is not Armstrong Number.\n", num);
    return 0;
}