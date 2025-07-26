// Write a program to print the average of 3 numbers.
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf(" Enter your 1st number : ");
    scanf(" %f", &num1);
    printf(" Enter your 2nd number : ");
    scanf(" %f", &num2);
    printf(" Enter your 3rd number : ");
    scanf(" %f", &num3);
    printf(" Average/Mean of your given three numbers is : %.3f.\n", (num1 + num2 + num3) / 3);
    return 0;
}