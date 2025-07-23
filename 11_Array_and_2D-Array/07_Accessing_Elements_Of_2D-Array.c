// Optimize way to scaning,printing of elements of 2D-Array.
#include <stdio.h>

#define ROWS 2 // #define is like that const which can be changed in main function.
#define COLS 3

int main()
{
    int matrix[ROWS][COLS];

    // Input section
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf(" Enter value for element [%d][%d] : ", i, j);
            scanf(" %d", &matrix[i][j]);
        }
    }

    // Output section
    printf("\nEntered 2D array:\n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}