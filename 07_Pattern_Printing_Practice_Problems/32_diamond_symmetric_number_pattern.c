/*
32. Diamond Number Pattern (Symmetric)
Program to print the following symmetric diamond number pattern:
Example : rows = 4
Expected Output:
1 1 1 1 1 1 1
1 2 2 2 2 2 1
1 2 3 3 3 2 1
1 2 3 4 3 2 1
1 2 3 3 3 2 1
1 2 2 2 2 2 1
1 1 1 1 1 1 1
*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the pattern (e.g., 4) : ");
    scanf("%d", &n);

    int size = 2 * n - 1;

    printf("Diamond Number Pattern(%d size) Number Pattern -:\n", size);
    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= size; col++)
        {
            int rowDist = row > n ? size - row + 1 : row;      
            int colDist = col > n ? size - col + 1 : col;     
            int value = rowDist < colDist ? rowDist : colDist; 

            printf("%d ", value);
        }
        
        printf("\n");
    }

    return 0;
}