// Program to print the sum of a number 'n' and its reverse.
#include <stdio.h>

int main()
{
    int num, reversed = 0;

    printf("Enter a number to calculate the sum of it and its reverse : ");
    scanf("%d", &num);

    int originalNumber = num;

    while (num > 0)
    {
        reversed = (reversed * 10) + (num % 10);
        num /= 10;
    }
    
    int sum = originalNumber + reversed;
    printf("The sum of %d and its reverse %d is : %d\n",originalNumber, reversed, sum);

    return 0;
}