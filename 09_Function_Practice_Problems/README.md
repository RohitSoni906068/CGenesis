# 🛠️ Function Practice Problems in C

Welcome to the **Function Practice Problems** module of _The Ultimate C Programming Language_ course! This folder is packed with hands-on coding challenges to help you master writing, using, and applying functions in C. These problems are essential for building modular, reusable, and efficient code.

---

## 🎯 What You'll Practice

- Mathematical operations (sum, product, average, factorial, power, GCD, etc.)
- Number theory (prime, factors, permutations, combinations, Fibonacci)
- Area and conversion calculations (circle, rectangle, temperature, square root)
- Swapping, logic, and comparison functions
- Special patterns and output formatting
- Using library functions and custom logic

---

## 🖥️ Function Examples

### 1. Basic Function (No Return Value)

```c
void greet() {
    printf("Hello, World!\n");
}
// Usage:
greet();
```

### 2. Function with Return Value

```c
int add(int a, int b) {
    return a + b;
}
// Usage:
int sum = add(3, 5);
printf("Sum: %d\n", sum);
```

### 3. Passing Parameters by Value

```c
void printSquare(int n) {
    printf("Square: %d\n", n * n);
}
printSquare(4);
```

### 4. Composite Functions

```c
int multiply(int a, int b) {
    return a * b;
}
int squareOfSum(int x, int y) {
    int s = add(x, y);
    return multiply(s, s);
}
printf("%d\n", squareOfSum(2, 3));
```

### 5. Using a Library Function

```c
#include <math.h>
double root = sqrt(25.0);
printf("Square root: %.2f\n", root);
```

---

## 🗂️ File Guide

| File Name                        | Description                                      |
|----------------------------------|--------------------------------------------------|
| `01_Good_Morning,Afternoon.c`    | Greeting functions (morning, afternoon, etc.)    |
| `02_Namaste_and_Bonjour.c.c`     | Greeting in different languages                  |
| `03_Table_Of_N.c`                | Print multiplication table of N                  |
| `04_Hot_Cold.c`                  | Weather categorization by temperature            |
| `05_Sum_of_three_numbers.c`      | Sum of three numbers                             |
| `06_Sum,Product,Average.c`       | Sum, product, and average of two numbers         |
| `07_Area_Of_Square.c`            | Area of a square                                 |
| `08_Celsius_to_Fahreheit.c`      | Celsius to Fahrenheit conversion                 |
| `09_Celsius_to_Kelvin.c`         | Celsius to Kelvin conversion                     |
| `10_Fahrenheit_to_Celsius.c`     | Fahrenheit to Celsius conversion                 |
| `11_Fahrenheit_to_Kelvin.c`      | Fahrenheit to Kelvin conversion                  |
| `12_Kelvin_to_Celsius.c`         | Kelvin to Celsius conversion                     |
| `13_Kelvin_to_Fahreheit.c`       | Kelvin to Fahrenheit conversion                  |
| `14_Min_of_two_numbers.c`        | Minimum of two numbers                           |
| `15_Min_of_three_numbers.c`      | Minimum of three numbers                         |
| `16_Area_Of_Circle,Rectangle.c`  | Area of circle and rectangle using functions     |
| `17_Force_Of_Attraction.c`       | Calculate force of attraction                    |
| `18_Factorial.c`                 | Factorial of a number                            |
| `19_Factorial_of_First_N.c`      | Factorials of first N numbers                    |
| `20_Fibonacci.c`                 | Fibonacci sequence using functions               |
| `21_Fibonacci_of_First_N.c`      | First N Fibonacci numbers                        |
| `22_Sum_Of_Digit_Of_N.c`         | Sum of digits of a number                        |
| `23_Right_Start_Triangle.c`      | Print a right-aligned triangle                   |
| `24_Combination.c`               | Calculate combinations (nCr)                     |
| `25_Permutation.c`               | Calculate permutations (nPr)                     |
| `26_Star_Pascal_Triangle.c`      | Pascal's Triangle with stars                     |
| `27_Center-align_rows_Pascal_Triangle.c` | Center-aligned Pascal's Triangle           |
| `28_Print_Swap_Numbers_Using_Temp.c` | Swap numbers using a temporary variable      |
| `29_Printing_Swap_Numbers.c`     | Swap numbers without a temporary variable        |
| `30_Power_Library_Function.c`    | Power calculation using library function         |
| `31_Power_Function.c`            | Power calculation (base^exponent)                |
| `32_Power_From_0_to_Exponet.c`   | Power from 0 to exponent                         |
| `33_Greatest_Common_Divisor.c`   | GCD of two numbers                               |
| `34_Prime_Factors_Of_N.c`        | Prime factors of a number                        |
| `35_Square_root.c`               | Calculate square root                            |
| `36_Prime_Numbers_In_Range.c`    | Print prime numbers in a range                   |

---

## 🏆 Best Practices for Function-Based Problem Solving

- **Break Down Problems:** Use functions to modularize and organize your code.
- **Use Clear Names:** Name your functions and variables descriptively.
- **Comment Your Code:** Explain the purpose and logic of each function.
- **Test Thoroughly:** Try different inputs, including edge cases.
- **Reuse Functions:** Avoid code duplication by reusing well-written functions.
- **Explore Library Functions:** Use C's standard library for common tasks when possible.

---

## 💡 Tips for Learners

- Practice writing both simple and composite functions.
- Experiment with parameter passing and return values.
- Try combining multiple functions to solve bigger problems.
- Review and learn from others’ solutions.
- Challenge yourself with variations and extensions of each problem.

---

Happy Practicing & Keep Functioning! ⚙️✨
