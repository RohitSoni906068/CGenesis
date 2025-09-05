// Program to initialize every element of a 2D matrix with the value N, where the matrix dimensions (rows and columns) 
// are provided by the user.
#include <stdio.h>

int main()
{
    int rows, cols, fill_value;

    // Prompt the user for matrix dimensions and fill value

    printf("Enter the number of rows in the matrix : ");
    scanf("%d", &rows);

    printf("Enter the number of columns in the matrix : ");
    scanf("%d", &cols);

    printf("Enter the value to store in each element of the matrix : ");
    scanf("%d", &fill_value);

    // Create and initialize matrix
    int matrix[rows][cols];

    printf("Generated Matrix -:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            matrix[i][j] = fill_value;
            printf("%d ", matrix[i][j]);
        }

        printf("\n");
    }

    return 0;
}