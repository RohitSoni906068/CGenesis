# C Programming: Basic Practice Problems

Welcome to the **Basic Practice Problems** module of _The Ultimate C Programming Language_ course! This section is dedicated to strengthening your understanding of C programming through hands-on problem solving. Each file in this folder is a practical exercise, designed to help you apply core concepts and build confidence in writing C code.

---

## 🚀 What This Module Covers

- Area and perimeter calculations (circle, rectangle, square)
- Temperature conversions (Celsius, Fahrenheit, Kelvin)
- Simple interest and percentage calculations
- Volume computations (cylinder, sphere)
- Remainder operations (with and without modulus)
- Working with fractions, cubes, and halves
- Practice with input, output, and arithmetic logic

---

## 🖥️ Practice Problem Examples

### 1. Area of a Circle

```c
float radius = 5.0;
float area = 3.14 * radius * radius;
printf("Area: %.2f\n", area);
```

### 2. Celsius to Fahrenheit Conversion

```c
float celsius = 25.0;
float fahrenheit = (celsius * 9 / 5) + 32;
printf("Fahrenheit: %.2f\n", fahrenheit);
```

### 3. Simple Interest Calculation

```c
float principal = 1000, rate = 5, time = 2;
float si = (principal * rate * time) / 100;
printf("Simple Interest: %.2f\n", si);
```

### 4. Remainder Without Modulus

```c
int num = 17, divisor = 5;
int quotient = num / divisor;
int remainder = num - (quotient * divisor);
printf("Remainder: %d\n", remainder);
```

### 5. Input and Output

```c
int n;
printf("Enter a number: ");
scanf("%d", &n);
printf("You entered: %d\n", n);
```

---

## 🗂️ Problem Index

| File Name                                 | Description                                         |
|-------------------------------------------|-----------------------------------------------------|
| `Area_of_circle.c`                        | Calculate the area of a circle                      |
| `Area_of_rectangle.c`                     | Calculate the area of a rectangle                   |
| `Area_of_Square.c`                        | Calculate the area of a square                      |
| `Calculate_Simple_Interest.c`             | Compute simple interest                             |
| `Calculating_Percentage.c`                | Find the percentage of marks                        |
| `Celsius_to_Fahrenheit.c`                 | Convert Celsius to Fahrenheit                       |
| `Celsius_to_Kelvin.c`                     | Convert Celsius to Kelvin                           |
| `Circumference_of_circle.c`               | Calculate the circumference of a circle             |
| `Cube_of_N.c`                             | Find the cube of a number                           |
| `Fahrenheit_to_Celsius.c`                 | Convert Fahrenheit to Celsius                       |
| `Fahrenheit_to_Kelvin.c`                  | Convert Fahrenheit to Kelvin                        |
| `Finding_remainder_using_moduls.c`        | Find remainder using modulus operator               |
| `Finding_remainder_without_using_moduls.c`| Find remainder without modulus operator             |
| `Fractional_Part_of_Float_N.c`            | Extract fractional part of a float                  |
| `Half_of_Number.c`                        | Calculate half of a number                          |
| `Kelvin_to_Celsius.c`                     | Convert Kelvin to Celsius                           |
| `Kelvin_to_Fahrenheit.c`                  | Convert Kelvin to Fahrenheit                        |
| `Perimeter_of_rectangle.c`                | Calculate the perimeter of a rectangle              |
| `Perimeter_of_Square.c`                   | Calculate the perimeter of a square                 |
| `Sum_of_2_Given_Number.c`                 | Add two numbers                                     |
| `Volume_of_cylinder.c`                    | Calculate the volume of a cylinder                  |
| `Volume_of_Sphere.c`                      | Calculate the volume of a sphere                    |

---

## 📝 How to Use

1. **Choose a problem:** Each `.c` file is a standalone exercise.
2. **Read and understand:** Review the code and comments to grasp the logic.
3. **Compile and run:** Practice compiling and executing each file to see the results.
4. **Experiment:** Modify the code or try new inputs to deepen your understanding.

---

## 🏆 Best Practices for Practice Problems

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

Happy Practicing & Keep Building Your Skills! 🏗️
