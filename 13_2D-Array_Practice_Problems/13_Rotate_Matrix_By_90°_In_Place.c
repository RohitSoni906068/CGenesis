// Program to rotate a square matrix in-place by 90° clockwise (LeetCode 48)

#include <stdio.h>

int main()
{
    int n;
    printf(" Enter the dimension of the square matrix : ");
    scanf(" %d", &n);

    int matrix[n][n];
    printf(" Enter all %d elements of the matrix -:\n", n * n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf(" %d", &matrix[i][j]);
        }
    }

    // Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = tmp;
        }
    }

    // Reverse each row
    for (int i = 0; i < n; i++)
    {
        for (int j = 0, k = n - 1; j < k; j++, k--)
        {
            int tmp = matrix[i][j];
            matrix[i][j] = matrix[i][k];
            matrix[i][k] = tmp;
        }
    }

    printf(" Rotated matrix (90° clockwise) -:\n");
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