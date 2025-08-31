/*
12. Plus (+) Sign Pattern
Program to print a plus (+) sign pattern using asterisks.
Note: The number of rows must be an odd number provided by the user.
Example : rows = 5
Expected Output:
_ _ * _ _
_ _ * _ _
* * * * *
_ _ * _ _
_ _ * _ _
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter an odd number of rows : ");
    scanf("%d", &rows);

    // Validate that the number of rows is odd
    if (rows % 2 == 0)
    {
        printf("Error : Number of rows must be odd.\n");
        return 1;
    }

    int midPoint = rows / 2 + 1;

    printf("Plus Sign(%d rows) Pattern (Asterisks) -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            (i == midPoint || j == midPoint) ? printf("* ") : printf("  ");
        }

        printf("\n");
    }

    return 0;
}