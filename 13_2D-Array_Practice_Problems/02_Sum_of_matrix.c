// Find the sum of a given matrix of n x m.
#include <stdio.h>

int main()
{
    int numRows, numCols;

    printf(" Enter the number of rows in the matrix : ");
    scanf(" %d", &numRows);

    printf(" Enter the number of columns in the matrix : ");
    scanf(" %d", &numCols);

    int matrix[numRows][numCols];

    int sum = 0;

    printf(" Enter all elements of the matrix :\n");

    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            printf(" Element [%d][%d] : ", i, j);
            scanf(" %d", &matrix[i][j]);
            sum += matrix[i][j];
        }
    }

    printf(" Sum of all elements in the matrix : %d\n", sum);

    return 0;
}