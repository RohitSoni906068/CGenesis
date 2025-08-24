/*
Program to print a given matrix (n × m) in even indexed row-wise wave form.
Example (rows = 3, cols = 3)
Input Matrix:        Wave-printed Output:
1    2   3           3   2   1
4    5   6           4   5   6
7    8   9           9   8   7
*/
#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter number of rows in the matrix : ");
    scanf(" %d", &rows);

    printf("Enter number of columns in the matrix : ");
    scanf(" %d", &cols);

    int matrix[rows][cols];

    printf("Enter all %d elements of the matrix -:\n", rows * cols);
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < cols; c++)
        {
            scanf(" %d", &matrix[r][c]);
        }
    }

    printf("Wave-printed matrix -:\n");
    for (int r = 0; r < rows; r++)
    {
        if (r % 2 == 0)
        {
            for (int c = cols - 1; c >= 0; c--)
            {
                printf("%d ", matrix[r][c]);
            }
        }
        else
        {
            for (int c = 0; c < cols; c++)
            {
                printf("%d ", matrix[r][c]);
            }
        }
        printf("\n");
    }

    return 0;
}