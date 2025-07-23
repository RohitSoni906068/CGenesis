// Program to declare and initialize one array,
// and take user input to fill another array, then print values of both.
#include <stdio.h>

int main()
{
    // Declare and initialize an array with predefined values
    int array[5] = {1, 2, 3, 4, 5};

    // Display the predefined array values
    printf(" Value At 0th index is : %d\n", array[0]);
    printf(" Value At 1st index is : %d\n", array[1]);
    printf(" Value At 2nd index is : %d\n", array[2]);
    printf(" Value At 3rd index is : %d\n", array[3]);
    printf(" Value At 4th index is : %d\n", array[4]);

    // Declaring another array
    int marks[5];

    // Take input from the user
    printf(" Enter marks of 5 students -: \n");
    scanf(" %d", &marks[0]);
    scanf(" %d", &marks[1]);
    scanf(" %d", &marks[2]);
    scanf(" %d", &marks[3]);
    scanf(" %d", &marks[4]);

    // Display the entered marks
    printf(" Marks of 1st Student is : %d\n", marks[0]);
    printf(" Marks of 2nd Student is : %d\n", marks[1]);
    printf(" Marks of 3rd Student is : %d\n", marks[2]);
    printf(" Marks of 4th Student is : %d\n", marks[3]);
    printf(" Marks of 5th Student is : %d\n", marks[4]);

    return 0;
}