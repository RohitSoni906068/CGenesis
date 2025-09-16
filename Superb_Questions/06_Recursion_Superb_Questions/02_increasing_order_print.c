// Recursive function to print numbers from 1 to N in increasing order.
#include <stdio.h>

void print_increasing(int start, int end) 
{
    if (start > end) return;

    printf("%d ", start);
    print_increasing(start + 1, end);

    return;
}

int main()
{
    int maxNumber;
    printf("Enter the maximum number to end at : ");
    scanf("%d", &maxNumber);

    // Handle invalid ranges/Edge cases
    if (maxNumber < 1)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }
    
    printf("Increasing order from 1 to %d : ", maxNumber);
    print_increasing(1, maxNumber);
    
    printf("\n");
    return 0;
}