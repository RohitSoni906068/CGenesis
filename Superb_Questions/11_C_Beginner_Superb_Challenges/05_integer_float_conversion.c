// Program to convert integer to float and float to integer.
#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);

    printf("\nInterger To Float Converstion (Implicit conversation) -:\n");
    float floating = number; // Implicit conversation
    printf("Original number is : %d\n", number);
    printf("The converted float value is : %f\n\n", floating);

    printf("Float To Interger Converstion (Explicit conversation) -:\n");
    int Integer_Converted = (int)floating; // Explicit conversation
    printf("Original number is : %f\n", floating);
    printf("The converted integer value is : %d\n", Integer_Converted);
    printf("On spot(directly) converted integer value is : %d\n", (int)floating); // Explicit conversation

    printf("\n");
    return 0;
}