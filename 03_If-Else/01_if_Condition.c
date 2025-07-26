#include <stdio.h>
int main()
{ 
    /* Structure of if-:

    if (condition) {
    // Block of code to execute if the condition is true
    }

    for example-: */
    int number;
    printf(" Enter Number : ");
    scanf(" %d", &number);
    if (number > 0) // Given Number is greater than 0 then, printf funcation is execute
    {
        printf(" %d is positive.\n",number); 
        // When Conditions of if is right then this bolck of code will be executed
    }
    return 0;
}
