// Function to calculate square root using the Newton-Raphson method.
#include <stdio.h>

float squareroot(float n)
{
    float x = n;
    float y = 1.0f;
    float epsilon = 0.00001f; // accuracy level

    while (x - y > epsilon)
    {
        x = (x + y) / 2;
        y = n / x;
    }

    return x;
}

int main()
{
    float n;
    printf("Enter Number : ");
    scanf("%f", &n); 

    if (n < 0)
    {
        printf("Square root of negative number is not real.\n");
    }
    
    else
    {
        float result = squareroot(n);
        printf("Square root of %.4f is %.4f\n", n, result);
    }

    return 0;
}