/* 
19. In-place program to transform a given matrix (n × m) by reversing elements of every even-indexed row.
    Example (rows = 3, cols = 4):
    Input Matrix:               Transformed Matrix:
    1   2   3   4               4   3   2   1           
    5   6   7   8               5   6   7   8
    9   10  11  12              12  11  10  9
*/

#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter number of rows in the matrix : ");
    scanf("%d", &rows);

    printf("Enter number of columns in the matrix : ");
    scanf("%d", &cols);

    int matrix[rows][cols];

    printf("Enter all %d elements of the matrix -:\n", rows * cols);
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            scanf(" %d", &matrix[row][col]);
        }
    }

    // Reverse elements of every even-indexed row
    for (int row = 0; row < rows; row++)
    {
        if (row % 2 == 0)
        {
            for (int i = 0, j = cols - 1; i < j; i++, j--)
            {
                int tempValue = matrix[row][i];
                matrix[row][i] = matrix[row][j];
                matrix[row][j] = tempValue;
            }
        }
    }

    printf("Transformed matrix -:\n");
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        
        printf("\n");
    }

    return 0;
}