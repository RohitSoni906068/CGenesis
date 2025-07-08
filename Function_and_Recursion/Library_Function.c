#include <stdio.h>
/*
Library functions are predefined (built-in) functions provided by the C/C++ standard libraries.
Ex-:
printf()-> Prints output to the screen.
scanf()-> Reads input from the user.

*/
#include <math.h> // Required for sqrt, pow, abs

/*
<math.h> — Math Functions -:
sqrt(x)-> Returns square root of x.
pow(x, y)-> Returns x raised to power y.
abs(x)-> Absolute value of x (int only). May be Require<stdlib.h> or <math.h>

Example: Using Multiple Library Functions */

#include <stdlib.h>
int main()
{
    double number = 25.0;
    int base = 2, exponent = 5;
    int negativeNumber = -10;

    // Square root of a number
    double root = sqrt(number); // sqrt(25.0) = 5.0

    // Power of a number
    double power = pow(base, exponent); // pow(2, 5) = 32.0

    // Absolute value of an integer
    int absolute = abs(negativeNumber); // abs(-10) = 10

    // Output results
    printf(" Square root of %.2f = %.2f\n", number, root);
    printf(" %d raised to the power of %d = %.2f\n", base, exponent, power);
    printf(" Absolute value of %d = %d\n", negativeNumber, absolute);

    return 0;
}