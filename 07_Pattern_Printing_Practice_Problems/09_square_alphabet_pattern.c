/*
9. Square Alphabet Pattern
Program to print a square pattern using consecutive alphabets.
Example : dimension = 4
Expected Output:
A B C D
A B C D
A B C D
A B C D
*/
#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension : ");
    scanf("%d", &dimension);

    printf("Square(%d x %d) Pattern with Alphabet -:\n", dimension, dimension);
    for (int row = 1; row <= dimension; row++)
    {
        char ch = 'A';
        
        for (int col = 1; col <= dimension; col++)
        {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}