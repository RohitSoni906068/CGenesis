/*
06. Program to rotate a square matrix 90° clockwise in-place using a while loop.
    Example (rows/cols = 3)
    Input Matrix:           90° clockwise rotated Matrix:
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
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    // Transpose the matrix in-place
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            // Swap elements to transpose
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }

    }

    // Reverse each column in place to complete the 90° clockwise rotation
    for (int i = 0; i < size; i++)
    {
        int left = 0; // Start of the column
        int right = size - 1; // End of the column

        while (left < right)
        {
            // Swap elements to reverse the column
            int tmp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = tmp;

            left++;
            right--;
        }

    }

    printf("Rotated matrix (90° clockwise) :\n");
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