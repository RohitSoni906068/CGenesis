// Write a program to Store the transpose of the matrix in another matrix.
#include <stdio.h>

int main()
{
    int rows, cols;

    printf(" Enter the number of rows : ");
    scanf(" %d", &rows);
    printf(" Enter the number of columns : ");
    scanf(" %d", &cols);

    int matrix[rows][cols];

    printf(" Enter the elements of the matrix :\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    // Compute and print the transpose
    int transposedMatrix[cols][rows];
    printf(" Transposed matrix :\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            transposedMatrix[i][j] = matrix[j][i];
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}