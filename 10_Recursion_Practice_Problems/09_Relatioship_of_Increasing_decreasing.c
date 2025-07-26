// Function to print numbers from n to 1, and then from 1 back to n.
#include <stdio.h>

void printDescendingAndAscending(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d ", n); // Print while descending
    printDescendingAndAscending(n - 1);
    printf("%d ", n); // Print while ascending (backtracking)
}

int main()
{
    int number;
    printf(" Enter a number : ");
    scanf(" %d", &number);
    printDescendingAndAscending(number);
    printf("\n");
    return 0;
}