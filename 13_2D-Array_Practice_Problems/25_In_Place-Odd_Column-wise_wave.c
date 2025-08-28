/*
In-place program to transform a given square matrix (n x n) by transposing, swapping rows, and reversing elements of every odd-indexed row.
Example (rows = 4, cols = 4)
Input Matrix:               Transformed Matrix:
1   2   3   4               4   8   12  16
5   6   7   8               15  11  7   3
9   10  11  12              2   6   10  14
13  14  15  16              13  9   5   1
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the square matrix : ");
    scanf(" %d", &n);

    int matrix[n][n];
    printf("Enter all %d elements -:\n", n * n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    // Transpose the matrix
    for (int row = 0; row < n; row++)
    {
        for (int col = row; col < n; col++)
        {
            int temp = matrix[row][col];
            matrix[row][col] = matrix[col][row];
            matrix[col][row] = temp;
        }
    }

    // Swap rows top ↔ bottom
    int top = 0, bottom = n - 1;
    while (bottom > top)
    {
        for (int i = 0; i < n; i++)
        {
            int temp = matrix[top][i];
            matrix[top][i] = matrix[bottom][i];
            matrix[bottom][i] = temp;
        }
        top++;
        bottom--;
    }

    // Reverse every odd-indexed row
    for (int i = 0; i < n; i++)
    {
        if (i % 2 != 0)
        {
            int left = 0, right = n - 1;
            while (left < right)
            {
                int temp = matrix[i][left];
                matrix[i][left] = matrix[i][right];
                matrix[i][right] = temp;
                left++;
                right--;
            }
        }
    }

    // Print result
    printf("Transformed Matrix -:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}