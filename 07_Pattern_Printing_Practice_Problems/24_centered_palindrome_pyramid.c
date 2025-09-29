/* 
24. Centered Numeric Palindrome Pyramid
Program to print a centered palindromic pyramid pattern using numbers.
Example : rows = 4
Expected Output:
_ _ _ 1
_ _ 1 2 1
_ 1 2 3 2 1
1 2 3 4 3 2 1
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int spaces = rows - 1; // Print leading spaces
    int maxNum = 1;        // Print numbers

    printf("Centered Numeric Palindrome Pyramid(%d rows) Pattern -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= spaces; j++)
        {
            printf("  ");
        }

        // Print ascending numbers
        for (int k = 1; k <= maxNum; k++)
        {
            printf("%d ", k);
        }

        // Print descending numbers
        for (int l = maxNum - 1; l >= 1; l--)
        {
            printf("%d ", l);
        }

        // Prepare for next row
        spaces--;
        maxNum++;

        printf("\n");
    }

    return 0;
}