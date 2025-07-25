#include <stdio.h>
int main()
{
    /* Structure of if,else-if,else -:

    if (condition) {
    // Block of code to execute if the condition is true
    }

    esle if(conditio){
    // Block of code to execute if the condition is false
    }

    else {
    // Block of Code will be executed when conditions of if and else-if are get false
    }

    for example-: */
    int number;
    printf(" Enter Number : ");
    scanf(" %d", &number);
    if (number > 0) // Given Number is greater than 0 then, printf funcation is execute
    {
        printf(" %d is positive Number.\n", number);
        // When Conditions of if is right then this bolck of code will be executed
    }

    else if (number == 0) // Block of code to execute if the condition is false
    // When the condition of if get true then this block of code not excuted compilar doesn't read this block of code
    {
        printf(" %d is not positive or negative Number.\n", number);
    }

    else // else will be executed when conditions of if and else-if get false
    // When condition of anyone(if or else-if) get ture then this block of code will not be excuted. 
    {
        printf(" %d is Negative Number.\n", number);
    }
    return 0;
}
