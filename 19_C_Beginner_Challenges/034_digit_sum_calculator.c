// Program to compute the sum of the digits of an integer.
#include <stdio.h>

int main()
{
    printf("Welcome to Sum of Digits\n");
    int number, Sum_Digit = 0;

    printf("Enter the Number : ");
    scanf("%d", &number);

    int temp = number; // temp is used to update the value of number in while loop without modifying the value of number
    while (temp > 0)
    {
        Sum_Digit += temp % 10;
        temp /= 10;
    }

    printf("The Sum of Digit of %d is : %d\n", number, Sum_Digit);
    return 0;
}