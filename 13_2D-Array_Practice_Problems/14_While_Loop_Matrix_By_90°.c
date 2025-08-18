// Program to rotate a square matrix 90 degrees clockwise in place using a while loop.

#include <stdio.h>

int main()
{
    int n;
    printf(" Enter the dimension of the square matrix : ");
    scanf(" %d", &n);

    int matrix[n][n];
    printf(" Enter all %d elements of the matrix :\n", n * n);

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

    // Reverse each row in place to complete the 90° clockwise rotation
    for (int i = 0; i < n; i++)
    {
        int left = 0;
        int right = n - 1;
        while (left < right)
        {
            int tmp = matrix[i][left];
            matrix[i][left] = matrix[i][right];
            matrix[i][right] = tmp;
            left++;
            right--;
        }
    }

    printf(" Rotated matrix (90° clockwise) :\n");
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