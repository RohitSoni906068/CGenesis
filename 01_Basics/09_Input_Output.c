#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    /*  "scanf" is used in C to read input from the user during runtime.
        It is part of the Standard Input/Output Library (<stdio.h>).

        Syntax:
        scanf("format_specifier", &variable);
        */
    printf("You are %d years old.", age);
    return 0;
}
/*
Note-:
Purpose                                 Example
Reading an int                          scanf("%d", &x);
Reading a float                         scanf("%f", &marks);
Reading a char                          scanf(" %c", &ch); (note the space before %c)

 Syntax:
    scanf("format_specifier", &variable);
*/