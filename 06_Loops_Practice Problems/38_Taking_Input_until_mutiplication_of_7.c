// Continuously take input from the user until a number that is a multiple of 7 is entered.

#include <stdio.h>

int main()
{
    int inputNumber;

    printf(" Enter numbers that are not multiples of 7.\n");

    do
    {
        printf("Enter a number: ");
        scanf("%d", &inputNumber);
    } while (inputNumber % 7 == 0);

    printf(" %d is a multiple of 7. Program terminated.\n", inputNumber);

    return 0;
}