/*
7. Left-Aligned Inverted Triangle Number Pattern
Program to print a left-aligned inverted triangle pattern using consecutive numbers.
Example : rows = 4
Expected Output:
1 2 3 4
1 2 3
1 2
1
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Left-Aligned Inverted Triangle(%d rows) Number Pattern -:\n", rows);
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}