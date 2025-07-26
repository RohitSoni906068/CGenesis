// Write a Function to swap values and print them.
#include <stdio.h>
void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    printf(" Swapped value of the first number : %d\n", x);
    printf(" Swapped value of the second number : %d\n", y);
    return;
}
int main()
{
    int num1, num2;
    printf(" Enter 1st Number : ");
    scanf(" %d", &num1);
    printf(" Enter 2nd Number : ");
    scanf(" %d", &num2);
    swap(num1, num2);
    return 0;
}
