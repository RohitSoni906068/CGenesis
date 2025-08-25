/* 
Program to print a given matrix (n × m) in odd indexed row-wise wave form.
Example (numRows = 3, numCols = 4)
Input Matrix:               Wave-printed Output:
1   2   3   4               1   2   3   4
5   6   7   8               8   7   6   5
9   10  11  12              9   10  11  12
*/

#include <stdio.h>

int main()
{
    int rows, cols;
    printf(" Enter number of rows in the matrix : ");
    scanf(" %d", &rows);

    printf(" Enter number of columns in the matrix : ");
    scanf(" %d", &cols);

    int matrix[rows][cols];

    printf(" Enter all %d elements of the matrix -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    printf(" Wave-printed matrix -:\n");
    for (int i = 0; i < rows; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        else
        {
            for (int j = cols - 1; j >= 0; j--)
            {
                printf("%d ", matrix[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}