// Check if the array is a palindrome or not.
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int array_size, is_palindrome = true;

    printf(" Enter the size of the array : ");
    scanf(" %d", &array_size);

    int array[array_size];
    for (int i = 0; i < array_size; i++)
    {
        printf(" Enter value for element %d : ", i);
        scanf(" %d", &array[i]);
    }
    for (int j = 0, k = array_size - 1; j < k; j++, k--)
    {
        if (array[j] != array[k])
        {
            printf(" The array is not a palindrome.\n");
            is_palindrome = false;
            break;
        }
    }
    if (is_palindrome)
    {
        printf("The array is a palindrome.\n");
    }
    return 0;
}