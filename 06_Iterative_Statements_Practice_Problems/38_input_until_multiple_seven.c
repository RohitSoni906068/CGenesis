// Program to continuously take input from the user until a number that is a multiple of 7 is entered.
#include <stdio.h>

int main()
{
    int inputNumber;

    printf("Enter numbers that are not multiples of 7 for continue and multiple of 7 for exit : \n");

    do
    {
        printf("Enter a number : ");
        scanf("%d", &inputNumber);
    } while (inputNumber % 7 != 0);

    printf("%d is a multiple of 7 so you get exit from the loop.\n", inputNumber);

    return 0;
}