/*
08. In-place program to transform a given matrix (n × m) by reversing elements of every odd-indexed row.
    Example (rows = 3, cols = 4):
    Input Matrix:               Transformed Matrix:
    1   2   3   4               1   2   3   4
    5   6   7   8               8   7   6   5
    9   10  11  12              9   10  11  12
*/
#include <stdio.h>

int main()
{
    int row, column;
    
    printf("Enter number of row of matrix : ");
    scanf("%d", &row);
    
    printf("Enter number of columns in place : ");
    scanf("%d", &column);
    
    int Matrix[row][column];
    
    printf("Enter all %d elements of matrix -:\n", row * column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf(" %d", &Matrix[i][j]);
        }
    }
    
    // Reverse elements of every odd-indexed row
    for (int i = 0; i < row; i++)
    {
        if (i % 2 != 0)
        {
            int right = 0; // Start of the column 
            int left = column - 1; // End of the column

            // Swap elements to reverse the column
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
    
    printf("Transformed matrix -:\n");
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