// Give a person's age, find if they should get a driving license or not.
#include <stdio.h>
int main()
{
    int age;
    printf(" Enter Your Age : ");
    scanf(" %d", &age);
    if (age >= 18)
    {
        printf("Yes, you are eligible for a driving license.\n");
    }
    else
    {
        printf("No, you are not eligible for a driving license.\n");
    }
    return 0;
}