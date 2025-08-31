/*
2. Square Star Pattern
Program to print a square pattern using asterisks.
Example : dimension = 4
Expected Output:
* * * *
* * * *
* * * *
* * * *
*/
#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension : ");
    scanf("%d", &dimension);

    printf("Square(%d x %d) Pattern with Asterisks -:\n", dimension, dimension);
    for (int i = 1; i <= dimension; i++)
    {
        for (int j = 1; j <= dimension; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}