#include <stdio.h>
int main()
{
    /* Structure-:
if (condition1) {
  Executes if condition1 is true
    if (condition2) {
        Executes if both condition1 and condition2 are true
    }
    else { 
        Executes if condition1 is true, but condition2 is false
    }
}
    else {
     Executes if condition1 is false
}
    for example -:*/
    int age, marks;
    printf(" Enter Your Age : ");
    scanf(" %d", &age);
    printf(" Enter Your Marks : ");
    scanf(" %d", &marks);
    if (age > 18) // Executes if condition is true
    {
        if (marks >= 80) // Executes if both above condition and this condition are true
        {
            printf("Eligible for scholarship.\n");
        }
        else // Executes if age condition is true, but marks condition is false
        {
            printf(" Eligible, But not scholarship.\n");
        }
    }
    else // Executes if age condition is false
    {
        printf(" Not eligible.\n");
    }
    return 0;
}