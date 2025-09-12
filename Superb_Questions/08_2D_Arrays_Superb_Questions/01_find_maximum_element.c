// Program to find the maximum element in a 2D array.
#include <stdio.h>

int main()
{
    int rows, cols;

    printf("Enter the number of rows in the matrix : ");
    scanf("%d", &rows);

    printf("Enter the number of columns in each row : ");
    scanf("%d", &cols);

    int matrix[rows][cols];
    int maxValue;

    // Input matrix elements and find the maximum
    printf("Enter all %d elements of the matrix -:\n", rows * cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf(" %d", &matrix[i][j]);

            // Initialize the maximum value with the first element
            if (i == 0 && j == 0)  maxValue = matrix[i][j];
            
            // Update the maximum value if a larger element is found
            else if (matrix[i][j] > maxValue) maxValue = matrix[i][j];

        }

    }

    // Output the maximum value
    printf("The maximum element in the matrix is : %d\n", maxValue);

    return 0;
}