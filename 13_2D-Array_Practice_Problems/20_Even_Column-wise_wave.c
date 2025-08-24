/*
Program to print a given matrix (n x m) in even indexed column-wise wave form.
Example (rows = 3, cols = 3)
Input Matrix:       Wave-printed Output:
1    2   3          7   4   1
4    5   6          2   5   8
7    8   9          9   6   3
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
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    printf("Wave-printed Matrix -:\n");
    for (int col = 0; col < cols; col++)
    {
        if (col % 2 == 0)
        {
            for (int row = rows - 1; row >= 0; row--)
            {
                printf("%d ", matrix[row][col]);
            }
        }
        else
        {
            for (int row = 0; row < rows; row++)
            {
                printf("%d ", matrix[row][col]);
            }
        }
        printf("\n");
    }

    return 0;
}