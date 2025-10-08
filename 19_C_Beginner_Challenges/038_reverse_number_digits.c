// Program to reverse the digits of a number.
#include <stdio.h>

int main()
{
    printf("Welcome to Reversing the Number.\n");
    int num;

    printf("Enter the Number : ");
    scanf("%d", &num);

    int temp = num; // temp is used to update the value of num in while loop without modifying the value of num
    int reverse_num = 0;

    while (temp > 0)
    {
        reverse_num = (reverse_num * 10) + (temp % 10);
        temp /= 10;
    }

    printf("The Reverse of %d is : %d\n", num, reverse_num);
    return 0;
}