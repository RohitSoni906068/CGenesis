// Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.
#include<stdio.h>

int main()
{
    char first_name[20];
    printf("Enter your first name : ");
    scanf(" %s", first_name);

    char last_name[20];
    printf("Enter your last name : ");
    scanf(" %s", last_name);

    int age;
    printf("Enter your age : ");
    scanf(" %d", &age);

    printf("\n\n");
    printf("First Name : %s\n", first_name);
    printf("Last Name : %s\n", last_name);
    printf("Age : %d\n", age);

    return 0;
}
