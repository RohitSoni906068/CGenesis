// Program that takes two numbers and shows result of all arithmetic operators (+,-,*,/,%).
#include <stdio.h>

int main()
{
    int first, second;

    printf("Enter First Number : ");
    scanf("%d", &first);

    printf("Enter Second Number : ");
    scanf("%d", &second);

    printf("Here are the results of the arithmetic operators.\n");
    printf("%d + %d = %d\n", first, second, first + second);
    printf("%d - %d = %d\n", first, second, first - second);
    printf("%d * %d = %d\n", first, second, first * second);
    printf("%d / %d = %d    (integer Division)\n", first, second, first / second);
    printf("%d modulo %d = %d\n", first, second, first % second);

    return 0;
}