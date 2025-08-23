/* 
Program to print a given matrix(n*m) in column-wise wave form.
Example (rows = 3, cols = 3)
Input            Output
1    2   3       7   4   1
4    5   6       2   5   8
7    8   9       9   6   3

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

    printf("Wave Print of the matrix -:\n");
    for (int i = 0; i < cols; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = rows - 1; j >= 0; j--)
            {
                printf("%d ", matrix[j][i]);
            }
        }
        else
        {
            for (int j = 0; j < rows; j++)
            {
                printf("%d ", matrix[j][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
