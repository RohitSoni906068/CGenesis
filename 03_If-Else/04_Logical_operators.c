#include <stdio.h>
int main()
{
    /*
    Use of "&&" 
if (condition1 && condition2) {
    This block executes only if BOTH condition1 and condition2 are true
}
    Use of "||"
if (condition1 || condition2) {
    Executes if condition1 OR condition2 (or both) are true
}
    Use of "!"
if (!condition) {
    Executes if condition is false
}
    Use of "=="
if (a == b) {
    Executes if a is equal to b
}

 */
    int age;
    printf(" Enter Your Age : ");
    scanf(" %d", &age);
    printf(" Enter Your Marks : ");
    int marks;
    scanf(" %d", &marks);
    if (age > 18 && marks >= 80)
    // This block executes only if BOTH age condition and marks condition are true
    {
        printf(" Eligible for Scholarship.\n");
    }
    if (marks==99||marks==100) // Executes if marks is equal to 99 or 100.
    {
        printf(" You Get Price from college.\n");
    }
    
    // Let's solve one quize -: Given Number is odd or not.
    int number;
    printf(" Enter NUmber : ");
    scanf(" %d", &number);
    if (number % 2 != 0) // Executes if condition is false
    {
        printf(" You Entered Odd Number -: %d.\n", number);
    }
    return 0;
}