/*
30. Symmetric Hollow Pyramid (Numbers)
Program to print a symmetric hollow pyramid using numbers:
Example : rows = 4
Expected Output:
1 2 3 4 3 2 1
1 2 3 _ 3 2 1
1 2 _ _ _ 2 1
1 _ _ _ _ _ 1
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int totalRows = (2 * rows) - 1; // Total number of rows in the pattern
    int visibleCount = rows - 1; // Number of visible numbers on each side
    int spaceCount = 1; // Number of hidden (blank) positions

    printf("Symmetric Hollow Pyramid(%d rows) Pattern (Numbers) -:\n", rows);

    // Print the first row
    int num = 1;
    for (int i = 1; i <= totalRows; i++)
    {
        (i < rows) ? printf("%d ", num++) : printf("%d ", num--);
    }
    printf("\n");

    // Print the remaining rows
    for (int i = 1; i <= rows - 1; i++)
    {
        int num = 1;

        // Print numbers on the left side
        for (int j = 1; j <= visibleCount; j++)
        {
            printf("%d ", num++); // Displaying then,increasing value of num by 1(Post_increment).
        }

        // Print hidden (blank) positions
        for (int j = 1; j <= spaceCount; j++)
        {
            printf("  ");
        }

        // Print numbers on the right side
        for (int j = 1; j <= visibleCount; j++)
        {
            printf("%d ", --num); // Displaying after decreasing value of num by 1(Pre_increment).
        }

        // Prepare for next row
        visibleCount--;
        spaceCount += 2;
        printf("\n");
    }

    return 0;
}