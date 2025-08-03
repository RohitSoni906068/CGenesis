# Loop Practice Problems in C

Welcome to the **Loops Practice Problems** module of _The Ultimate C Programming Language_ course! This folder is packed with hands-on coding challenges to help you master loops, logic, and mathematical operations in C.

---

## 🎯 Purpose

This directory contains a wide variety of loop-based problems designed to:

- Strengthen your understanding of `for`, `while`, and `do-while` loops
- Practice mathematical and logical operations
- Build problem-solving skills for interviews and exams

---

## 📝 Problem Categories

- **Number Series:** Arithmetic and geometric progressions, Fibonacci, custom series
- **Digit Operations:** Sum, count, even/odd digits, reverse, palindrome
- **Prime & Composite:** Prime checks, printing primes, composite detection
- **Special Numbers:** Armstrong, factorial, raised to power
- **Range-Based Problems:** Print or sum numbers in a range, skip/exclude values
- **Input-Based Loops:** Continue until a condition is met (e.g., input is odd or multiple of 7)
- **ASCII Operations:** Print ASCII values for characters

---

## 🖥️ Loop Practice Examples

### 1. Print Numbers in a Range

```c
int r = 1, s = 10;
for (int i = r; i <= s; i++) {
    printf("%d ", i);
}
```

### 2. Sum in a Range (While Loop)

```c
int r = 1, s = 5, sum = 0;
while (r <= s) {
    sum += r;
    r++;
}
printf("Sum: %d\n", sum);
```

### 3. Factorial of N

```c
int n = 5, fact = 1;
for (int i = 1; i <= n; i++) {
    fact *= i;
}
printf("Factorial: %d\n", fact);
```

### 4. Prime Check

```c
int n = 7, isPrime = 1;
for (int i = 2; i < n; i++) {
    if (n % i == 0) {
        isPrime = 0;
        break;
    }
}
printf(isPrime ? "Prime\n" : "Not Prime\n");
```

### 5. Input Until Condition (Multiple of 7)

```c
int num;
do {
    printf("Enter a number: ");
    scanf("%d", &num);
} while (num % 7 != 0);
printf("You entered a multiple of 7!\n");
```

---

## 📂 File Reference Guide

### 🟢 Easy Problems

| #  | File Link                                                        | Description                                      |
|----|------------------------------------------------------------------|--------------------------------------------------|
| 1  | [`01_Hellow_World_N_times.c`](01_Hellow_World_N_times.c)         | Print "Hello World" N times                      |
| 2  | [`02_Printing_Numbers_in_range.c`](02_Printing_Numbers_in_range.c)| Print numbers in a given range                   |
| 3  | [`03_Print_R_to_S_except_i_to_k.c`](03_Print_R_to_S_except_i_to_k.c) | Print range except for a subrange            |
| 4  | [`04_Odd_Number_R_to_S.c`](04_Odd_Number_R_to_S.c)               | Print odd numbers in a range                     |
| 5  | [`05_Odd_Numbers_in_range_using_continue.c`](05_Odd_Numbers_in_range_using_continue.c) | Print odd numbers using continue statement |
| 6  | [`06_Table_of_N.c`](06_Table_of_N.c)                             | Print multiplication table of N                  |
| 7  | [`07_Reverse_Table_of_N.c`](07_Reverse_Table_of_N.c)             | Print table of N in reverse order                |
| 8  | [`08_Sum_of_table_of_N.c`](08_Sum_of_table_of_N.c)               | Sum of the multiplication table of N             |
| 9  | [`09_Sum_from_R_to_S_using_for-loop.c`](09_Sum_from_R_to_S_using_for-loop.c) | Sum numbers in a range using for loop      |
| 10 | [`10_Sum_in_range_using_while-loop.c`](10_Sum_in_range_using_while-loop.c) | Sum numbers in a range using while loop    |
| 11 | [`11_Even_Number_in_range.c`](11_Even_Number_in_range.c)         | Print even numbers in a range                    |
| 12 | [`12_ASCII_values_of_Characters_for_loop.c`](12_ASCII_values_of_Characters_for_loop.c) | Print ASCII values using a for loop      |
| 13 | [`13_Printing_ASCII_values_while_loop.c`](13_Printing_ASCII_values_while_loop.c) | Print ASCII values using a while loop     |

---

### 🟡 Medium Problems

| #  | File Link                                                        | Description                                      |
|----|------------------------------------------------------------------|--------------------------------------------------|
| 14 | [`14_Factorial_of_N.c`](14_Factorial_of_N.c)                     | Factorial of a given number                      |
| 15 | [`15_Factorial_in_range.c`](15_Factorial_in_range.c)             | Factorials for numbers in a range                |
| 16 | [`16_Nth_Fibonacci_Number.c`](16_Nth_Fibonacci_Number.c)         | Find the Nth Fibonacci number                    |
| 17 | [`17_Fibonacci_Series_From_First_to_N.c`](17_Fibonacci_Series_From_First_to_N.c) | Fibonacci series up to N                 |
| 18 | [`18_AP_1,3,5,7,_upto_N.c`](18_AP_1,3,5,7,_upto_N.c)             | Print arithmetic progression: 1, 3, 5, ...       |
| 19 | [`19_AP_4,7,10_upto_N.c`](19_AP_4,7,10_upto_N.c)                 | Print arithmetic progression: 4, 7, 10, ...      |
| 20 | [`20_GP_1,2,4,8_upto_N.c`](20_GP_1,2,4,8_upto_N.c)               | Print geometric progression: 1, 2, 4, ...        |
| 21 | [`21_GP_3,12,48.c`](21_GP_3,12,48.c)                             | Print geometric progression: 3, 12, 48, ...      |
| 22 | [`22_GP_100,50,25_upto_N.c`](22_GP_100,50,25_upto_N.c)           | Print geometric progression: 100, 50, 25, ...    |
| 23 | [`23_GP_100,97,94_upto_positive_term.c`](23_GP_100,97,94_upto_positive_term.c) | Print decreasing arithmetic progression  |
| 24 | [`24_Raised_to_the_power.c`](24_Raised_to_the_power.c)           | Calculate power of a number                      |
| 25 | [`25_Prime_or_Composite.c`](25_Prime_or_Composite.c)             | Check if a number is prime or composite          |
| 26 | [`26_Check_Prime_or_Composite_using_while-loop.c`](26_Check_Prime_or_Composite_using_while-loop.c) | Prime/composite check using while loop     |
| 27 | [`27_Print_N_prime_number.c`](27_Print_N_prime_number.c)         | Print first N prime numbers                      |
| 28 | [`28_Sum_Series:1,-2,+3,-4_upto_N.c`](28_Sum_Series:1,-2,+3,-4_upto_N.c) | Sum a custom alternating series up to N   |
| 29 | [`29_Sum_Series:-1,2,-3,4.c`](29_Sum_Series:-1,2,-3,4.c)         | Sum a custom alternating series                  |
| 30 | [`30_Count_Digit_of_N.c`](30_Count_Digit_of_N.c)                 | Count digits in a number                         |
| 31 | [`31_Reverse_of_N.c`](31_Reverse_of_N.c)                         | Reverse a given number                           |
| 32 | [`32_Sum_of_digits_of_N.c`](32_Sum_of_digits_of_N.c)             | Sum digits of a number                           |
| 33 | [`33_Sum_of_Even_digits_of_N.c`](33_Sum_of_Even_digits_of_N.c)   | Sum even digits of a number                      |
| 34 | [`34_Sum_of_Odd_Digits_of_N.c`](34_Sum_of_Odd_Digits_of_N.c)     | Sum odd digits of a number                       |
| 35 | [`35_Sum_of_Digits_of_N_and_its_Reverse.c`](35_Sum_of_Digits_of_N_and_its_Reverse.c) | Sum digits of N and its reverse        |
| 36 | [`36_Sum_of_N_to_its_reverse.c`](36_Sum_of_N_to_its_reverse.c)   | Sum N and its reverse                            |
| 37 | [`37_Taking_Input_until_odd_Number.c`](37_Taking_Input_until_odd_Number.c) | Input until an odd number is entered     |
| 38 | [`38_Taking_Input_until_mutiplication_of_7.c`](38_Taking_Input_until_mutiplication_of_7.c) | Input until a multiple of 7 is entered |

---

### 🔴 Hard Problems

| #  | File Link                                                        | Description                                      |
|----|------------------------------------------------------------------|--------------------------------------------------|
| 39 | [`39_Palindrome_or_not.c`](39_Palindrome_or_not.c)               | Check if a number is a palindrome                |
| 40 | [`40_Armstrong_Number_or_not.c`](40_Armstrong_Number_or_not.c)   | Check if a number is an Armstrong number         |
| 41 | [`41_Armstrong_Number_in_Range.c`](41_Armstrong_Number_in_Range.c) | Armstrong numbers in a given range             |

---

## 🏆 Best Practices for Solving Loop Problems

- **Understand the Problem:** Read the prompt carefully and identify the required loop structure.
- **Plan Before Coding:** Write pseudocode or outline your logic before implementation.
- **Use Meaningful Names:** Name your variables and files descriptively.
- **Comment Your Code:** Explain tricky logic, especially for nested loops or mathematical operations.
- **Test Thoroughly:** Try edge cases and a variety of inputs.
- **Refactor for Clarity:** Clean up your code for readability and efficiency.
- **Learn from Mistakes:** Debug and analyze errors to deepen your understanding.

---

## 💡 Tips for Learners

- Start with simple problems and gradually tackle more complex ones.
- Experiment with different loop types for the same problem.
- Use print statements to trace and debug your logic.
- Practice regularly to build speed and confidence.
- Review and learn from others’ solutions.

---

Happy Practicing! 🚀
