// Write a program to Print the transpose of the matrix.
#include <stdio.h>

int main()
{
    int rows, cols;

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
            scanf(" %d", &matrix[i][j]);
        }
    }

    // Output the transpose of the matrix
    printf(" Transpose of the given matrix :\n");
    for (int i = 0; i < cols; i++)
    {
        for (int j = 0; j < rows; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}