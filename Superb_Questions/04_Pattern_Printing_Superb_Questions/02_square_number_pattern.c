/*
2. Square Number Pattern
Program to print a square pattern using consecutive numbers.
Example : dimension = 4
Expected Output:
1 2 3 4
1 2 3 4
1 2 3 4
*/
#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension : ");
    scanf("%d", &dimension);

    printf("Square(%d x %d) Pattern with Number -:\n", dimension, dimension);
    for (int i = 1; i <= dimension; i++)
    {
        for (int j = 1; j <= dimension; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}