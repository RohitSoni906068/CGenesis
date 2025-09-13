/*
11. Alternating Numeric-Alphabetic Triangle Pattern
Program to print a triangle pattern alternating between numbers and alphabets.
Example : rows = 5
Expected Output:
1
A B
1 2 3
A B C D
1 2 3 4 5
*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);

    printf("Alternating Numeric-Alphabetic Triangle(%d rows) Pattern -:\n", rows);
    for (int i = 1; i <= rows; i++)
    {
        int number = 1;
        char letter = 'A';

        for (int j = 1; j <= i; j++)
        {
            (i % 2 == 0) ? printf("%c ", letter++) : printf("%d ", number++);
            
            // Post Increment -> After Printing, letter gets +1 and number also gets +1
        }

        printf("\n");
    }
    
    return 0;
}