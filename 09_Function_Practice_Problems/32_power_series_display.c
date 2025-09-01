// Function to calculate and display powers of a base from exponent 0 to n.
#include <stdio.h>

void printPowers(int base, int limit)
{
    int result = 1;
    printf("%d raised to the power of 0 is : %d\n", base, result);

    for (int i = 1; i <= limit; i++)
    {
        result *= base;
        printf("%d raised to the power of %d is : %d\n", base, i, result);
    }

    return;
}

int main()
{
    int base, limit;
    printf("Enter the base number : ");
    scanf("%d", &base);

    printf("Enter the limit of the exponent from 0 to which you want to calculate the powers of %d : ", base);           
    scanf("%d", &limit);

    printPowers(base, limit); // Function call to calculate and display powers
    return 0;
}