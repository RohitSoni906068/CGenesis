/*
9. Floyd's Triangle Pattern (Numbers)
Program to print Floyd's triangle pattern using consecutive numbers.
Example : rows = 4
Expected Output:
1
2 3
4 5 6
7 8 9 10
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int consecutiveNumber = 1;

    printf("Floyd's Triangle(%d rows) Pattern with Numbers -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", consecutiveNumber++);
        }

        printf("\n");
    }

    return 0;
}