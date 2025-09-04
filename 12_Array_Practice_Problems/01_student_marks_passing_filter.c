// Program that accepts marks for multiple students and prints the roll numbers of students, 
// who scored below the passing mark (e.g., 35).
#include <stdio.h>

#define PASS_MARK 35 // Define a named constant for clarity

int main()
{
    int num_students;

    printf("Enter number of students : ");
    scanf("%d", &num_students);

    int marks[num_students];

    for (int i = 0; i < num_students; i++)
    {
        printf("Enter marks for student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    printf("\nStudents who scored less than %d :\n", PASS_MARK);

    for (int i = 0; i < num_students; i++)
    {
        if (marks[i] < PASS_MARK) printf("Roll Number : %d\n", i + 1);
    }

    return 0;
}
