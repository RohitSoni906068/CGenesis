/* 
14. X Pattern with Stars
Program to print an 'X' pattern using asterisks.
Note: The number of rows must be an odd number provided by the user.
Example : rows = 5
Expected Output:
* _ _ _ *
_ * _ * _
_ _ * _ _
_ * _ * _
* _ _ _ *
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
        printf(" Error : Number of rows must be odd.\n");
        return 1;
    }
    
    printf("X Pattern(%d rows) Pattern (Asterisks) -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= rows; j++)
        {
            (i == j || i + j == rows + 1) ? printf("* ") : printf("  ");
        }
        
        printf("\n");
    }

    return 0;
}