// Recursive function to print numbers in decreasing order from x down to 1.
#include <stdio.h>

void printDecreasing(int x)
{
    
   if (x < 1) return;

   printf("%d ", x);
   printDecreasing(x - 1);

   return;
}

int main()
{
    int maxNumber;

    printf("Enter your maximum number to start from : ");
    scanf("%d", &maxNumber);

    // Handle invalid ranges/Edge cases
    if (maxNumber < 1)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }
    
    printf("Decreasing order from %d to 1 : ", maxNumber);
    printDecreasing(maxNumber);

    printf("\n");
    return 0;
}