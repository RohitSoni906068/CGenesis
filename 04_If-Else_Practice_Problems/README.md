# 🧩 If-Else Practice Problems in C

Welcome to the **If-Else Practice Problems** module of _The Ultimate C Programming Language_ course! Here, you'll find a collection of real-world coding challenges designed to help you master conditional logic in C. Each problem is a chance to sharpen your thinking, boost your confidence, and have fun with code.

---

## 🌟 Why Practice Matters

Solving these problems will help you:

- Break down complex tasks into simple steps
- Think like a programmer
- Get comfortable with `if`, `else if`, `else`, and logical operators

Whether you're a beginner or brushing up your skills, this folder is your launchpad for logical thinking!

---

## 🖥️ Conditional Practice Examples

### 1. Find Minimum of Two Numbers

```c
int a = 5, b = 8;
printf("Min: %d\n", (a < b) ? a : b);
```

### 2. Divisibility by 5 or 3 but Not 15

```c
int n = 30;
if (((n % 5 == 0) || (n % 3 == 0)) && (n % 15 != 0)) {
    printf("Yes\n");
} else {
    printf("No\n");
}
```

### 3. Pass/Fail Based on Marks

```c
int marks = 42;
if (marks >= 33) {
    printf("Passed\n");
} else {
    printf("Failed\n");
}
```

### 4. Grading System

```c
int marks = 85;
if (marks >= 90) printf("A+\n");
else if (marks >= 80) printf("A\n");
else if (marks >= 70) printf("B\n");
else printf("C or below\n");
```

### 5. Leap Year Check

```c
int year = 2024;
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    printf("Leap Year\n");
} else {
    printf("Not Leap Year\n");
}
```

### 6. Profit or Loss

```c
int cp = 100, sp = 120;
if (sp > cp) printf("Profit: %d\n", sp - cp);
else if (cp > sp) printf("Loss: %d\n", cp - sp);
else printf("No profit, no loss\n");
```

---

## 🗂️ Problem List

| File Name                                 | What You'll Practice                                         |
|--------------------------------------------|--------------------------------------------------------------|
| `Area>perimeter_rectangle.c`               | Compare area and perimeter of a rectangle                    |
| `Min_Max_Algorithem.c`                     | Find the minimum and maximum of numbers                      |
| `Min_of_two_numbers.c`                     | Identify the smaller of two numbers                          |
| `Sides_of_triangle_or_not.c`               | Check if numbers can form a triangle                         |
| `Student_passed_or_falied.c`               | Decide pass/fail based on marks                              |
| `Three_Digits_or_not.c`                    | Check if a number has three digits                           |
| `Youngest_form_3_Boys.c`                   | Find the youngest among three                                |
| `loss_or_profit.c`                         | Calculate profit or loss                                     |
| `Divisible_by_5_or_3_but_not_15_logical.c` | Use logical operators for divisibility checks                |
| `Divisible_by_5_or_not.c`                  | Check divisibility by 5                                      |
| `Even_or_Odd.c`                            | Determine if a number is even or odd                         |
| `Grade_according_to_marks.c`               | Assign grades using nested if-else                           |
| `Greatest_from_3_Numbers.c`                | Find the greatest of three numbers                           |
| `Income_tax_slab.c`                        | Calculate tax based on income slabs                          |
| `Leap_Year_or_not.c`                       | Check if a year is a leap year                               |
| `License_or_not.c`                         | Check license eligibility by age                             |
| `Max_of_two_numbers.c`                     | Find the larger of two numbers                               |
| `Absoulate_value.c`                        | Get the absolute value of a number                           |
| `Average_of_three_numbers.c`               | Calculate the average of three numbers                       |
| `Character_digit_or_not.c`                 | Check if a character is a digit                              |
| `Character_lowercase_or_not.c`             | Check if a character is lowercase                            |
| `Dividend_divisible_By_Divisor_or_not.c`   | Test if one number divides another                           |
| `Divisible_By_5_and_3_or_not.c`            | Check divisibility by both 5 and 3                           |
| `Divisible_by_5_or_3_but_not_15.c`         | Divisibility by 5 or 3 but not 15 (alternative logic)        |

---

## 🏆 Best Practices for Conditional Practice

- **Break Down Problems:** Tackle each problem step by step.
- **Use Clear Names:** Name your variables and files descriptively.
- **Comment Your Code:** Explain your logic for future reference.
- **Test Thoroughly:** Try different values and edge cases.
- **Review Regularly:** Revisit and optimize your solutions as you learn more.

---

## 💡 Tips for Mastery

- Practice daily to build confidence and speed.
- Use print statements to debug and understand program flow.
- Learn from others’ solutions and approaches.
- Don’t hesitate to ask questions or seek feedback.

---

Happy Practicing & Keep Leveling Up Your Logic! 🧠
