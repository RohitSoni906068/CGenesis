// Program to read array size and elements from the user, then display the array in reverse order.
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);

    int array[size];
    printf("Enter all %d elements of array -:\n", size);

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("\nArray in reverse order :\n");
    for (int j = size - 1; j >= 0; j--)
    {
        printf("Element %d : %d\n", j + 1, array[j]);
    }

    return 0;
}
