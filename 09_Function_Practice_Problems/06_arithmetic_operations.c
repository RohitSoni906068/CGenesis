// Function for each of the following to calculate the sum, product, and average of two numbers.
#include <stdio.h>

float sum(float x, float y)
{
    return x + y;
}

float product(float x, float y)
{
    return x * y;
}

float average(float x, float y)
{
    return (x + y) / 2.0;
}

int main()
{
    float num1, num2;

    printf("Enter the first number : ");
    scanf("%f", &num1);
    printf("Enter the second number : ");
    scanf("%f", &num2);

    printf("Sum of %.3f + %.3f = %.3f\n", num1, num2, sum(num1, num2));
    printf("Product of %.3f * %.3f = %.3f\n", num1, num2, product(num1, num2));
    printf("Average of %.3f and %.3f is %.3f\n", num1, num2, average(num1, num2));
    
    return 0;
}