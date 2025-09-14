/*
05. Program to transpose a square matrix (n × n) in-place. (LeetCode-867)
    Example (rows/cols = 3):
    Input Matrix:           Transposed Matrix:
    1   2   3               1   4   7
    4   5   6               2   5   8
    7   8   9               3   6   9
*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the square matrix : ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter all %d elements of the matrix -:\n", size * size);
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            scanf(" %d", &matrix[row][col]);
        }
    }

    // Transpose the matrix in-place
    for (int row = 0; row < size; row++)
    {
        for (int col = row; col < size; col++)
        {
            // Swap elements to transpose
            int temp = matrix[row][col];
            matrix[row][col] = matrix[col][row];
            matrix[col][row] = temp;
        }

    }

    printf("Transposed matrix -:\n");
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