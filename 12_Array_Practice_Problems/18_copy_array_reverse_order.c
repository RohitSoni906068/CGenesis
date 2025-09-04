// Program to copy the contents of one array into another array in reverse order.
#include <stdio.h>

int main()
{
    int array_size;

    printf("Enter the size of the array : ");
    scanf("%d", &array_size);

    int array[array_size];
    int reversed_array[array_size];

    for (int i = 0; i < array_size; i++)
    {
        printf("Enter value for element %d : ", i);
        scanf("%d", &array[i]);

        reversed_array[array_size - 1 - i] = array[i]; // Copy elements in reverse order
    }

    printf("Reversed array : ");
    for (int j = 0; j < array_size; j++)
    {
        printf("%d ", reversed_array[j]);
    }

    printf("\n");
    return 0;
}
