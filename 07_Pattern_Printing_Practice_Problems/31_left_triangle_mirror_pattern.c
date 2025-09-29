/* 
31. Left-Triangle Increasing Mirror Pattern
Program to print a left-triangle increasing mirror pattern for a given size:
Example : size = 7
Expected Output:
1 1 1 1 1 1 1
1 2 2 2 2 2 2
1 2 3 3 3 3 3
1 2 3 4 4 4 4
1 2 3 4 5 5 5
1 2 3 4 5 6 6
1 2 3 4 5 6 7
*/
#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size of the pattern : ");
    scanf("%d", &size);

    printf("Left-Triangle Increasing Mirror Pattern(%d size) Number Pattern -:\n", size);
    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            (j <= i) ? printf("%d ", j) : printf("%d ", i);
        }

        printf("\n");
    }

    return 0;
}