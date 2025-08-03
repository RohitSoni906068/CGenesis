// Program to print a Square Alphabet.
// A B C D
// A B C D
// A B C D
// A B C D
#include <stdio.h>
int main()
{
    int size;
    printf(" Enter the size of the square pattern (rows and columns) : ");
    scanf(" %d", &size);

    for (int row = 1; row <= size; row++)
    {
        char ch = 'A';
        for (int col = 1; col <= size; col++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
    }

    return 0;
}