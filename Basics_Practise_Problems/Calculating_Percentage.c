// Calculating percentage of 5 subjects considering marks out of 100.
#include <stdio.h>

int main()
{
    float Mat_marks, Phy_marks, Che_marks, Engl_marks, Com_marks;
    printf("Enter Your Marks of Maths: ");
    scanf("%f", &Mat_marks);
    printf("Enter Your Marks of Physics: ");
    scanf("%f", &Phy_marks);
    printf("Enter Your Marks of Chemistry: ");
    scanf("%f", &Che_marks);
    printf("Enter Your Marks of English: ");
    scanf("%f", &Engl_marks);
    printf("Enter Your Marks of Computer: ");
    scanf("%f", &Com_marks);

    float total_marks = Mat_marks + Phy_marks + Che_marks + Engl_marks + Com_marks;
    float Maximum_marks = 5 * 100.0;

    printf("Your Score is: %.2f%%\n", (total_marks / Maximum_marks) * 100);

    return 0;
}