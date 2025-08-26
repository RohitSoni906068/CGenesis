/*
Program to transpose a square matrix (n x n) in-place. (LeetCode-867)
Example (n=3)
Input Matrix:           Trasposed Matrix:
1   2   3               1   4   7
4   5   6               2   5   8
7   8   9               3   6   9
*/
#include <stdio.h>

int main()
{
    int n;
    printf(" Enter the size of the square matrix : ");
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

    // Transpose the matrix in-place
    for (int row = 0; row < n; row++)
    {
        for (int col = row; col < n; col++)
        {
            int temp = matrix[row][col];
            matrix[row][col] = matrix[col][row];
            matrix[col][row] = temp;
        }
    }

    printf(" Transposed matrix :\n");
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}