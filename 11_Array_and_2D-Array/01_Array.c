#include <stdio.h>
/*
🔹 What is an Array?
An array in C is a collection of elements of the same data type, stored in contiguous memory locations.
It allows storing multiple values in a single variable using indexing.

🔹 Declaration of an Array:
    data_type array_name[size];

🔹 How it Works:
- When declared, the compiler allocates memory for all elements.
- Indexing starts from 0 and goes up to size - 1.
- Each element can be accessed or modified using its index.

🔹 Example:
    int marks[5]; // Creates an array to hold 5 integers
    marks[0] = 90;
    marks[1] = 85;
    printf("%d", marks[0]); // Output: 90
*/
int main()
{
    int marks[90]; // Reserve space to store 90 integers

    marks[0] = 45;
    marks[1] = 95;
    // We can go all the way till marks[89]
    printf(" Marks 0 and Marks 1 is : %d %d", marks[0], marks[1]);
    return 0;
}
/*

🔸 Summary:
An array is a fixed-size collection of elements of the same data type stored in consecutive memory locations.
It allows efficient storage and access using indices, starting from 0 to size-1.
*/
