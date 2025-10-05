// Program to calculate the result of raising one number to the power of another.
#include <stdio.h>

int main()
{
    int base, exponent;
    
    printf("Enter the base number : ");
    scanf("%d", &base);
    
    printf("Enter the exponent for %d : ", base);
    scanf("%d", &exponent);
    
    int power = 1;
    for (int i = 1; i <= exponent; i++)
    {
        power *= base;
    }
    printf("%d raised to the power %d is : %d.\n", base, exponent, power);

    return 0;
}