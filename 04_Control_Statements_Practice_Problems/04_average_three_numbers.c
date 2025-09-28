// Program to calculate and print the average of 3 numbers.
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Enter your 1st number : ");
    scanf("%d", &num1);

    printf("Enter your 2nd number : ");
    scanf("%d", &num2);

    printf("Enter your 3rd number : ");
    scanf("%d", &num3);
    
    float average=(num1+num2+num3)/3.0;
    printf("The Average/Mean of your given three numbers is : %.3f.\n", average);

    return 0;
}