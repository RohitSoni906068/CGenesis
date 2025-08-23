// Optimize way to scaning,printing of elements of an array.

#include <stdio.h>
 
int main()
{
    int marks[5];

    // Input: Reading marks from the user
    for (int studentIndex = 0; studentIndex < 5; studentIndex++)
    {
        printf(" Enter marks for student %d : ", studentIndex + 1);
        scanf(" %d", &marks[studentIndex]);
    }

    // Output: Displaying marks for each student
    for (int studentIndex = 0; studentIndex < 5; studentIndex++)
    {
        printf(" Marks of student %d : %d\n", studentIndex + 1, marks[studentIndex]);
    }

    return 0;
}