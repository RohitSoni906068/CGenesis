// Program to determine if a person is eligible for a driving license based on their age.
#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age : ");
    scanf("%d", &age);

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