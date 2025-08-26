/*
In-place program to transform a given square matrix (n x n) by reversing elements of every even-indexed column.
Input Matrix:               Transformed Matrix:
1   2   3                   7   4   1
4   5   6                   2   5   8
7   8   9                   9   6   3
*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the square matrix (n) : ");
    scanf(" %d", &size);

    int matrix[size][size];

    // Input
    printf("Enter all %d elements of the matrix -:\n", size * size);
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            scanf(" %d", &matrix[row][col]);
        }
    }

    // Transpose
    for (int row = 0; row < size; row++)
    {
        for (int col = row; col < size; col++)
        {
            int temp = matrix[row][col];
            matrix[row][col] = matrix[col][row];
            matrix[col][row] = temp;
        }
    }

    // Reverse elements of even-indexed rows in-place
    for (int row = 0; row < size; row++)
    {
        if (row % 2 == 0)
        {
            int left = 0, right = size - 1;
            while (left < right)
            {
                int temp = matrix[row][left];
                matrix[row][left] = matrix[row][right];
                matrix[row][right] = temp;
                left++;
                right--;
            }
        }
    }

    // Output
    printf("Transformed Matrix -:\n");
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}