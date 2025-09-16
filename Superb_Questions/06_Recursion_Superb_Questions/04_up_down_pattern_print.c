// Recursive function to print numbers from n down to 1, and then from 1 back up to n.
#include <stdio.h>

void DescendingAndAscending(int n)
{
    if (n == 0) return;
    
    printf("%d ", n); // Print while descending
    DescendingAndAscending(n - 1); 
    printf("%d ", n); // Print while ascending (backtracking)

    return;
}

int main()
{
    int maxNumber;
    printf("Enter the maximum number : ");
    scanf("%d", &maxNumber);

    // Handle invalid ranges/Edge cases
    if (maxNumber < 1)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }
    
    printf("Decreasing order from %d to 1 and then 1 to %d : ", maxNumber, maxNumber);
    DescendingAndAscending(maxNumber);

    printf("\n");
    return 0;
}