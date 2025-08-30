// Program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects with a maximum of 100 marks in each subject. Take the marks as input from the user.
#include <stdio.h>

int main()
{
    float Phy_marks, Math_marks, Che_marks;

    printf("Enter your Physics marks (out of 100) : ");
    scanf("%f", &Phy_marks);

    printf("Enter your Maths marks (out of 100) : ");
    scanf("%f", &Math_marks);

    printf("Enter your Chemistry marks (out of 100) : ");
    scanf("%f", &Che_marks);

    if (Phy_marks < 33 || Che_marks < 33 || Math_marks < 33)
    {
        printf("You are fail due to less marks in individual subject.\n");
    }
    
    else if (((Phy_marks + Math_marks + Che_marks) / 300.0) * 100 < 40.0)
    {
        printf("You are fail due to less percentage.\n");
    }
    
    else
    {
        printf("You Pass.\n");
    }

    return 0;
}