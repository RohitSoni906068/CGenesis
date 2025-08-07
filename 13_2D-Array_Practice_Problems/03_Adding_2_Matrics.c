// Program to add two matrices and print the resulting matrix.
#include <stdio.h>

int main()
{
    int numRows, numCols;

    printf(" Enter the number of rows in the matrix : ");
    scanf(" %d", &numRows);
    printf(" Enter the number of columns in the matrix : ");
    scanf(" %d", &numCols);

    int matrix1[numRows][numCols];
    int matrix2[numRows][numCols];

    printf(" Enter all elements of the first matrix :\n");
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            scanf(" %d", &matrix1[i][j]);
        }
    }

    printf(" Enter all elements of the second matrix :\n");
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            scanf(" %d", &matrix2[i][j]);
        }
    }

    printf(" Resultant matrix after addition :\n");
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            printf("%d ", matrix1[i][j] + matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}