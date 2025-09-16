/**
 * Recursive function to compute the number of distinct paths in a grid from a starting point to an 
 * endpoint moving only right or down (parameterized version).
 *
 * @param start_row Starting row index (1-based)
 * @param end_row   Ending row index (1-based)
 * @param start_col Starting column index (1-based)
 * @param end_col   Ending column index (1-based)
 * @return Number of possible paths
 */

#include <stdio.h>

int count_paths(int start_row, int end_row, int start_col, int end_col)
{ 
    int num_paths_right = 0, num_paths_down = 0;

    // Base case
    if (start_row == end_row && start_col == end_col) return 1;

    // If we are at the last row, we can only move right
    if (start_row == end_row)
    {
        num_paths_right = count_paths(start_row, end_row, start_col + 1, end_col);
    }
    
    // If we are at the last column, we can only move down
    else if (start_col == end_col)
    {
        num_paths_down = count_paths(start_row + 1, end_row, start_col, end_col);
    }
    
    // If we are not at the last row or column, we can move in both directions
    else
    {
        num_paths_right = count_paths(start_row, end_row, start_col + 1, end_col);
        num_paths_down = count_paths(start_row + 1, end_row, start_col, end_col);
    }

    return num_paths_right + num_paths_down;
}

int main(void)
{
    int rows, cols;

    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Enter the number of columns : ");
    scanf("%d", &cols);

    int total_paths = count_paths(1, rows, 1, cols);
    printf("Number of paths through the grid : %d\n", total_paths);

    return 0;
}