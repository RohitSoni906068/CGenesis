// Program to verify if a number is a palindrome.
#include <stdio.h>

int main()
{
    printf("Welcome to Palindrome Checker\n");
    int num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    int reverse_num = 0, temp = num;
    while (temp > 0)
    {
        reverse_num = (reverse_num * 10) + (temp % 10);
        temp /= 10;
    }

    (reverse_num == num) ? printf("%d is Palindrome\n", num) : printf("%d is not Palindrome\n", num);
    return 0;
}