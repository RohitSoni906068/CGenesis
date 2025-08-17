// Program to rotate the matrix by 90° clockwise. (Leetcode - 48)

#include <stdio.h>

int main()
{
    int n;
    printf(" Enter the dimension of the square matrix : ");
    scanf(" %d", &n);

    int matrix[n][n];
    printf(" Enter all elements of the matrix :\n");
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            scanf(" %d", &matrix[row][col]);
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

    // Reverse each row

    printf(" Rotated matrix (90° clockwise) :\n");
    for (int row = 0; row < n; row++)
    {
        for (int col = n - 1; col >= 0; col--)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }
    return 0;
}