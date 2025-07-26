// Program to print Left-Triangle Increasing Mirror Pattern for a given size:
// 1 1 1 1 1 1 1
// 1 2 2 2 2 2 2
// 1 2 3 3 3 3 3
// 1 2 3 4 4 4 4
// 1 2 3 4 5 5 5
// 1 2 3 4 5 6 6
// 1 2 3 4 5 6 7
#include <stdio.h>
int main()
{
    int size;

    printf(" Enter the size of the pattern : ");
    scanf(" %d", &size);

    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= size; col++)
        {
            if (col <= row)
                printf("%d ", col);
            else
                printf("%d ", row);
        }
        printf("\n");
    }

    return 0;
}