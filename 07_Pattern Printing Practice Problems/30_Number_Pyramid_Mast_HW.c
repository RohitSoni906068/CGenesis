// Program to print the Symmetric Hollow Pyramid.
// 1 2 3 4 3 2 1
// 1 2 3 _ 3 2 1
// 1 2 _ _ _ 2 1
// 1 _ _ _ _ _ 1
#include <stdio.h>
int main()
{
    int totalRows;
    printf(" Enter the number of rows : ");
    scanf(" %d", &totalRows);

    int visibleCount = totalRows - 1;
    int spaceCount = 1;

    // Print the first row
    int num = 1;
    for (int i = 1; i <= (2 * totalRows) - 1; i++)
    {
        if (i < totalRows)
        {
            printf("%d ", num++);
        }
        else
        {
            printf("%d ", num--);
        }
    }
    printf("\n");

    // Print the remaining rows
    for (int i = 1; i <= totalRows - 1; i++)
    {
        num = 1;

        // Left side numbers
        for (int j = 1; j <= visibleCount; j++)
        {
            printf("%d ", num++); // Displaying then,increasing value of num by 1(Post_increment).
        }

        // Spaces in the center
        for (int j = 1; j <= spaceCount; j++)
        {
            printf("  ");
        }

        // Right side numbers
        for (int j = 1; j <= visibleCount; j++)
        {
            printf("%d ", --num); // Displaying after decreasing value of num by 1(Pre_increment).
        }

        printf("\n");
        visibleCount--;
        spaceCount += 2;
    }

    return 0;
}