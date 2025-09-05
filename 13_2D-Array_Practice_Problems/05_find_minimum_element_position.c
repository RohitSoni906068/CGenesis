// Program to find the minimum element and its position in a 2D array.
#include <stdio.h>

#include <limits.h>

int main()
{
    int rows, cols;
    printf("Enter the number of rows in the matrix : ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix : ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    int min_value = INT_MAX; // Initialize the minimum value to the maximum possible integer value

    int min_row = 0, min_col = 0; // Maintain the position(row and column) of the minimum value

    printf("Enter all %d elements of the matrix -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);

            if (matrix[i][j] < min_value)
            {
                min_value = matrix[i][j];
                min_row = i;
                min_col = j;
            }

        }   
    }

    printf("Matrix[%d][%d] has the minimum value : %d\n", min_row, min_col, min_value);
    return 0;
}