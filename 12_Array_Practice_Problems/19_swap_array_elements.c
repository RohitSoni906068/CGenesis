// Program to swap two elements of an array.
#include <stdio.h>

void swap(int arr[])
{
    int temp = arr[0];
    arr[0] = arr[1];
    arr[1] = temp;

    return;
}

int main()
{
    int array[2];

    printf("Enter the value of 1st element : ");
    scanf("%d", &array[0]);

    printf("Enter the value of 2nd element : ");
    scanf("%d", &array[1]);

    printf("Before Swapping -:\n");
    printf("The value of 1st element is : %d \n The value of 2nd element is : %d ", array[0], array[1]);

    swap(array); // Call the swap function

    printf("After Swapping -:\n");
    printf("The value of 1st element is : %d \n The value of 2nd element is : %d ", array[0], array[1]);
    
    return 0;
}