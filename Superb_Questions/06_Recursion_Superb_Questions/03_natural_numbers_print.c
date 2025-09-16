// Recursive function to print numbers from 1 to n.
#include <stdio.h>

void print_increasing(int maxNumber) 
{
    if (maxNumber == 0) return;
 
    print_increasing(maxNumber - 1);
    printf("%d ", maxNumber);

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
    print_increasing(maxNumber);

    printf("\n");
    return 0;
}