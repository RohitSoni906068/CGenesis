/*
12. Program to rotate a square matrix by 90° clockwise and print the result. (LeetCode-48)
    Example (rows/cols = 3):
    Input Matrix:           90° Clockwise Rotated Matrix:
    1   2   3               7   4   1
    4   5   6               8   5   2
    7   8   9               9   6   3
*/

#include <stdio.h>

int main()
{
    int size;
    printf("Enter the dimension of the square matrix : ");
    scanf("%d", &size);

    int matrix[size][size];

    printf("Enter all %d elements of the matrix :\n", size * size);
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            scanf(" %d", &matrix[row][col]);
        }
    }

    // Transpose the matrix
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

    // Reverse each row
    printf("Rotated matrix (90° clockwise) :\n");
    for (int row = 0; row < size; row++)
    {
        for (int col = size - 1; col >= 0; col--)
        {
            printf("%d ", matrix[row][col]);
        }

        printf("\n");
    }
    
    return 0;
}