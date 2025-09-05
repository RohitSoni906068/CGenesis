/*
10. Program to store the transpose of a matrix in another matrix. (LeetCode-867)
    Example (rows = 2, cols = 3)
    Input Matrix:           Transpose-stored Output:
    1   2   3               1    4
    4   5   6               2    5
                            3    6
*/
#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    printf("Enter the number of columns : ");
    scanf("%d", &cols);

    int matrix[rows][cols]; // Input matrix
    int transposedMatrix[cols][rows]; // Transposed matrix

    printf("Enter all %d elements of the matrix -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    // Compute and print the transpose
    printf("Transposed matrix stored in another matrix -:\n");
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