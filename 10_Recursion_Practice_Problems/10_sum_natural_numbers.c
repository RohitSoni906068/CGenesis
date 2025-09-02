// Recursive function to calculate the sum of the first 'n' natural numbers.
#include <stdio.h>

int sum(int maxNumber); // Function prototype

int main()
{
    int maxNumber;
    printf("Enter a maximum natural number to end at : ");
    scanf("%d", &maxNumber);

    // Handle invalid ranges/Edge cases
    if (maxNumber < 1)
    {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    int first_natural_number = sum(maxNumber);
    printf("The sum of the first %d natural numbers is : %d\n", maxNumber, first_natural_number);

    return 0;
}

int sum(int maxNumber) // Function definition
{
    return (maxNumber == 1) ? 1 : maxNumber + sum(maxNumber - 1);
}
