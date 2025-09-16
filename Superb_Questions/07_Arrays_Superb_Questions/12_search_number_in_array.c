// Program to check whether a given number is present in an array.
#include <stdio.h>

int main()
{
    int array_size;
    printf("Enter the size of the array : ");
    scanf("%d", &array_size); 

    int array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf("Enter value for element %d : ", i);
        scanf("%d", &array[i]);
    }

    int x;
    printf("Enter the number to search for : ");
    scanf("%d", &x);

    int found = 0;
    for (int j = 0; j < array_size; j++)
    {
        if (array[j] == x)
        {
            printf("Yes, the value %d is present at index %d.\n", x, j);
            found = 1;
            break;
        }
    }

    // if found is not equal to 1.
    if (!found) printf("No, the value %d is not present in the array.\n", x);

    return 0;
}
