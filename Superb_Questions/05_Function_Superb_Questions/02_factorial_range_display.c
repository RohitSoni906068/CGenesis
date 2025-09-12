// Function to display factorials of numbers from 1 to a given limit.
#include <stdio.h>

void displayFactorials(int limit)
{
    int result = 1;

    if (limit >= 0)
    {
        printf("0! = 1\n");
    }

    else
    {
        printf("Invalid input!\n");
        return;
    }    

    for (int i = 1; i <= limit; i++)
    {
        result *= i;
        printf("%d! = %d\n", i, result);
    }
}

int main()
{
    int limit;
    printf("Enter a last number from 0 to which you want to display the factorials of : ");
    scanf("%d", &limit);

    displayFactorials(limit);
    return 0;
}