
#include <stdio.h>
int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1;
    }
    return x * factorial(x - 1);
}
int main()
{
    int num;
    printf(" Enter Number : ");
    scanf(" %d", &num);
    printf(" The Factorial of %d is : %d.\n", num, factorial(num));
    return 0;
}