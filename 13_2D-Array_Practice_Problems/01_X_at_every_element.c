// Write a program to store N at every index of a 2D matrix with rows and columns which is also given by user.
#include <stdio.h>

int main()
{
    int num_rows, num_columns, fill_value;

    // Prompt the user for matrix dimensions and fill value
    printf(" Enter the number of rows in the matrix : ");
    scanf(" %d", &num_rows);
    printf(" Enter the number of columns in the matrix : ");
    scanf(" %d", &num_columns);
    printf(" Enter the value to store in each element of the matrix : ");
    scanf(" %d", &fill_value);

    // Create and initialize matrix
    int matrix[num_rows][num_columns];

    printf(" Generated Matrix :\n");
    for (int i = 0; i < num_rows; i++)
    {
        for (int j = 0; j < num_columns; j++)
        {
            matrix[i][j] = fill_value;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}