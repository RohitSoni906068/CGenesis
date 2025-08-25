/* 
In-place program to transform a given matrix (n x m) by reversing elements of every even-indexed row.
Example (rows = 3, cols = 4)
Input Matrix:           Transformed Matrix:
1   2   3   4           4   3   2   1           
5   6   7   8           5   6   7   8
9   10  11  12          12  11  10  9
*/

#include <stdio.h>

int main()
{
    int numRows, numCols;

    printf("Enter number of rows in the matrix : ");
    scanf(" %d", &numRows);

    printf("Enter number of columns in the matrix : ");
    scanf(" %d", &numCols);

    int matrix[numRows][numCols];

    printf("Enter all %d elements of the matrix -:\n", numRows * numCols);
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            scanf(" %d", &matrix[row][col]);
        }
    }

    // Reverse elements of every even-indexed row
    for (int row = 0; row < numRows; row++)
    {
        if (row % 2 == 0)
        {
            for (int left = 0, right = numCols - 1; left < right; left++, right--)
            {
                int tempValue = matrix[row][left];
                matrix[row][left] = matrix[row][right];
                matrix[row][right] = tempValue;
            }
        }
    }

    printf("Transformed matrix -:\n");
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}