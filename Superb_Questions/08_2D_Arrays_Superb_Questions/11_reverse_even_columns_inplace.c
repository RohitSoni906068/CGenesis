/*
11. In-place program to transform a given square matrix (n × n) by reversing elements of every even-indexed column.
    Example (rows = 3, cols = 3):
    Input Matrix:               Transformed Matrix:
    1   2   3                   7   2   9
    4   5   6                   4   5   6
    7   8   9                   1   8   3
*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the square matrix (n) : ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter all %d elements of the matrix -:\n", size * size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    // Transpose of the matrix in-place for even-indexed columns
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            // Swap elements to transpose
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }

    }

    // Reverse elements of even-indexed rows in-place
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            int left = 0; // Start of the column
            int right = size - 1; // End of the column
            
            while (right > left)
            {
                // Swap elements to reverse the column
                int temp = matrix[i][left];
                matrix[i][left] = matrix[i][right];
                matrix[i][right] = temp;

                left++;
                right--;
            }
        }
    }

    printf("Transformed Matrix -:\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}