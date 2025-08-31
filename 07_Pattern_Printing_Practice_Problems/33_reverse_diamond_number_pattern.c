/*
33. Reverse Diamond Number Pattern
Program to print the following reverse diamond number pattern:
Example : rows = 4
Expected Output:
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/
#include <stdio.h>
int main()
{
    int n;
    printf(" Enter the number : ");
    scanf(" %d", &n);

    printf("Reverse Diamond Number Pattern(%d rows) Number Pattern -:\n", n);
    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            int rowDistance = (i > n) ? (2 * n - i) : i;
            int colDistance = (j > n) ? (2 * n - j) : j;

            int minDistance = (rowDistance < colDistance) ? rowDistance : colDistance;

            printf("%d ", n + 1 - minDistance);
        }
        
        printf("\n");
    }

    return 0;
}