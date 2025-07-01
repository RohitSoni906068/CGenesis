// If the ages of Ram, Shyam and Ajay are input through the keyboard,
// write a program to determine the youngest of the three.
// Hint-: Use Logical Operators and Nested If.
#include <stdio.h>
int main()
{
    int Ram_age, Shyam_age, Ajay_age;
    printf(" Enter Age of Ram : ");
    scanf(" %d", &Ram_age);
    printf(" Enter Age of Shyam : ");
    scanf(" %d", &Shyam_age);
    printf(" Enter Age of Ajay : ");
    scanf(" %d", &Ajay_age);
    if (Ram_age == Shyam_age && Shyam_age == Ajay_age && Ram_age == Ajay_age)
    {
        printf(" Age of All Boys are equal : %d.\n", Ram_age);
    }

    if (Ram_age <= Shyam_age && Ram_age < Ajay_age)
    {
        if (Ram_age == Shyam_age)
        {
            printf(" Ram and Shyam is Youngest Boy.Whose age is : %d\n", Ram_age);
        }
        else
        {
            printf(" Ram is Youngest Boy.Whose Age is : %d\n", Ram_age);
        }
    }
    else if (Shyam_age <= Ajay_age && Shyam_age < Ram_age)
    {
        if (Shyam_age == Ajay_age)
        {
            printf(" Shyam and Ajay is Youngest Boy. Whose Age is : %d.\n", Shyam_age);
        }
        else
        {
            printf(" Shyam is Youngest Boy.Whose Age is : %d.\n", Shyam_age);
        }
    }
    else
    {
        if (Ajay_age == Ram_age)
        {
            printf(" Ajay and Ram is Youngest Boy.Whose Age is : %d.\n", Ajay_age);
        }
        else
        {
            printf(" Ajay is Youngest Boy.Whose Age is : %d.\n", Ajay_age);
        }
    }
    return 0;
}