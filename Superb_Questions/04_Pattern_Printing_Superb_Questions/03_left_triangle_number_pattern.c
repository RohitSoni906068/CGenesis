/*
3. Left-Aligned Triangle Number Pattern
Program to print a left-aligned triangle pattern using consecutive numbers.
Example : rows = 4
Expected Output:
1
1 2
1 2 3
1 2 3 4
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Left-Aligned Triangle(%d rows) Number Pattern -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}