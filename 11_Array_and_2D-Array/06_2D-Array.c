/*
🔷 What is a 2D Array?
- A 2D array is an array of arrays (also called a matrix).
- It is used to store data in a tabular form (rows and columns).

🔷 Syntax for Declaration:
    data_type array_name[rows][columns];

🔷 Example Declaration:
    int matrix[3][4];  // A 2D array with 3 rows and 4 columns

🔷 Initialization:
    int matrix[2][3] = {{1, 2, 3},{4, 5, 6}};

🔷 Accessing Elements:
    - Use two indices: array[row][column]
    - Example: matrix[1][2] = 6

🔷 Example Program:
*/
#include <stdio.h>

int main()
{

    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}; // ✅ 3. Declaration + Initialization at the Same Time

    // 🔷 Accessing Elements:
    printf(" Value at matrix[0][0] is : %d\n", matrix[0][0]);
    printf(" Value at matrix[0][1] is : %d\n", matrix[0][1]);
    printf(" Value at matrix[0][2] is : %d\n", matrix[0][2]);
    printf(" Value at matrix[1][0] is : %d\n", matrix[1][0]);
    printf(" Value at matrix[1][1] is : %d\n", matrix[1][1]);
    printf(" Value at matrix[1][2] is : %d\n", matrix[1][2]);

    return 0;
}
