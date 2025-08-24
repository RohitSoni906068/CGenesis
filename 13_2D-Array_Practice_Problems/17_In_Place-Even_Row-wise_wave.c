/*
#In Place, Program to change a given matrix(n*m) in-place in even row-wise wave form.
Example (rows = 3, cols = 3)
Input Matrix:           Wave-changed Matrix:
1   2   3               1   2   3
4   5   6               6   5   4
7   8   9               7   8   9
*/
#include <stdio.h>
int main()
{
    int row, column;
    printf(" Enter number of row of matrix : ");
    scanf(" %d", &row);
    printf(" Enter number of columns in place : ");
    scanf(" %d", &column);
    int Matrix[row][column];
    printf(" Enter all %d elements of matrix -:\n", row * column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf(" %d", &Matrix[i][j]);
        }
    }
    
    // Changing Matrix in even row-wise wave form.
    for (int i = 0; i < row; i++)
    {
        if (i % 2 != 0)
        {
            int right = 0;
            int left = column - 1;
            while (right < left)
            {
                int temp = Matrix[i][right];
                Matrix[i][right] = Matrix[i][left];
                Matrix[i][left] = temp;
                right++;
                left--;
            }
        }
    }

    // Printing Row-Wise Wave Form Matrix
    printf(" Wave-changed matrix -:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}