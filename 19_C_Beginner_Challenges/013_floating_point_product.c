// Program to calculate product of two floating points numbers.
#include <stdio.h>

int main()
{
    float first, second;

    printf("Enter first number : ");
    scanf("%f", &first);

    printf("Enter second number : ");
    scanf("%f", &second);

    float product = first * second;
    printf("The Product of %.3f * %.3f is : %.3f\n", first, second, product);
    
    return 0;
}