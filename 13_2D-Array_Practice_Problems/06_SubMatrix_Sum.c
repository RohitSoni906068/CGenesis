// Program to calculate the sum of elements in a selected submatrix from a 2D array.
// The user inputs the matrix dimensions, the elements, and the submatrix range.

#include <stdio.h>

int main()
{
    int rows, cols, submatrixSum = 0;

    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);

    printf(" Enter the number of columns : ");
    scanf(" %d", &cols);

    int matrix[rows][cols];
    printf(" Enter all elements of the matrix :\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int startRow, startCol, endRow, endCol;

    printf(" Enter starting row index : ");
    scanf(" %d", &startRow);

    printf(" Enter starting column index : ");
    scanf(" %d", &startCol);

    printf(" Enter ending row index : ");
    scanf(" %d", &endRow);

    printf(" Enter ending column index : ");
    scanf(" %d", &endCol);

    for (int i = startRow; i <= endRow; i++)
    {
        for (int j = startCol; j <= endCol; j++)
        {
            submatrixSum += matrix[i][j];
        }
    }

    printf(" Sum of elements from matrix[%d][%d] to matrix[%d][%d] is : %d\n", startRow, startCol, endRow, endCol, submatrixSum);

    return 0;
}