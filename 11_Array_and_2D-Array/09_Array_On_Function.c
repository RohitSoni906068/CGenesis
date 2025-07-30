#include <stdio.h>

// Function to modify the array and x
void change(int array[], int array_size, int x)
{
    // This reinitializes the local copy of x — does NOT affect x in main
    x = 10;

    // This loop modifies the actual array passed from main
    for (int i = 0; i < array_size; i++)
    {
        array[i] = 5; // This change affects the original array
    }

    return;
}

int main()
{
    int array_size, x;

    printf(" Enter value for variable x : ");
    scanf(" %d", &x);

    printf(" Enter size of the array : ");
    scanf(" %d", &array_size);

    int array[array_size];

    // Input array elements
    printf(" Enter all elements of the array :\n");
    for (int i = 0; i < array_size; i++)
    {
        scanf(" %d", &array[i]);
    }

    // Call the change function
    change(array, array_size, x);

    // x remains unchanged, showing pass-by-value
    printf("\nValue of x after function call : %d (unchanged due to pass-by-value)\n", x);

    // Array elements are modified to 5, showing pass-by-reference behavior
    printf(" Array elements after function call (changed to 5 due to pass-by-reference) :\n");
    for (int i = 0; i < array_size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}