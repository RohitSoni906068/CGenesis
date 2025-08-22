// Find the unique number in a given Array Where all the elements are being repeated twice with one value being unique
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int size;
    printf(" Enter the size of the array : ");
    scanf(" %d", &size);
    int array[size];

    for (int i = 0; i < size; i++)
    {
        printf(" Enter value for element %d : ", i);
        scanf(" %d", &array[i]);
    }
    // Find the first unique element in the array
    for (int j = 0; j < size; j++)
    {
        bool flag = true;
        for (int k = j + 1; k < size; k++)
        {
            if (array[j] == array[k])
            {
                flag = false;
            }
        }
        if (flag)
        {
            printf(" First unique number is %d at index %d.\n", array[j], j);
            break;
        }
    }
    return 0;
}
