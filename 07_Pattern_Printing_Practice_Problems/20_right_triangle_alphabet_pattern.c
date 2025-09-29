/* 
20. Right-Aligned Triangle Alphabet Pattern
Program to print a right-aligned triangle pattern using consecutive alphabets.
Example : rows = 4
Expected Output:
_ _ _ A
_ _ A B
_ A B C
A B C D
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    int spaces = rows - 1; // Print leading spaces

    printf("Right-Aligned Triangle(%d rows) Pattern (Alphabets) -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (int j = 1; j <= spaces; j++)
        {
            printf("  ");
        }

        // Print alphabets with a space
        char ch = 'A';
        for (int k = 1; k <= i; k++)
        {
            printf("%c ", ch++);
        }

        // Prepare for next row
        spaces--;
        printf("\n");
    }

    return 0;
}