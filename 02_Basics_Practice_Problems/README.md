# 🚀 C Programming: Basic Practice Problems

<div align="center">

[![C Programming](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Practice](https://img.shields.io/badge/Type-Practice%20Problems-green.svg)](https://github.com)
[![Beginner Friendly](https://img.shields.io/badge/Level-Beginner%20Friendly-brightgreen.svg)](https://github.com)
[![Files](https://img.shields.io/badge/Code%20Files-22-orange.svg)](https://github.com)

![Made for Students](https://img.shields.io/badge/Made%20for-Students-purple.svg?style=flat-square)
![Hands On Learning](https://img.shields.io/badge/Learning%20Style-Hands%20On-blue.svg?style=flat-square)

</div>

Welcome to the **Basic Practice Problems** module of **CGenesis**! 🎯  
This comprehensive collection is designed to strengthen your C programming fundamentals through hands-on problem solving. Each exercise builds upon core concepts and helps develop practical coding skills.

---

## 📋 Table of Contents

- [🎯 Learning Objectives](#-learning-objectives)
- [🛠️ Getting Started](#️-getting-started)
- [🏗️ Problem Categories](#️-problem-categories)
- [💻 Code Examples](#-code-examples)
- [💡 Key Concepts Covered](#-key-concepts-covered)
- [📊 Progress Tracker](#-progress-tracker)
- [🎓 What's Next?](#-whats-next)
- [🤝 Resources & Support](#-resources--support)

---

## 🎯 Learning Objectives

By completing these problems, you will master:

- **Basic Input/Output Operations** with `printf()` and `scanf()`
- **Arithmetic Operations** and mathematical calculations
- **Data Types** usage (`int`, `float`, `const`, `#define`)
- **Type Casting** and precision handling
- **Mathematical Formulas** implementation in C
- **Problem-solving Skills** through practical applications

---

## 🛠️ Getting Started

<details>
<summary><strong>🎯 Prerequisites</strong></summary>

- Basic understanding of C syntax
- GCC compiler or any C compiler
- Text editor or IDE (Code::Blocks, Dev-C++, VS Code)

</details>

### Compilation & Execution

```bash
# Clone the repository
git clone https://github.com/rohit528590/CGenesis.git
cd CGenesis/02_Basics_Practice_Problems

# Compile any program
gcc filename.c -o output

# Run the program
./output

# Example with Problem 1
gcc 01_Sum_of_2_Given_Number.c -o sum
./sum
```

<details>
<summary><strong>🎯 Recommended Learning Path</strong></summary>

1. **Start with Foundation Level** (Problems 1-8)
2. **Practice daily** - Solve 2-3 problems per day
3. **Understand concepts** before moving to next level
4. **Experiment** with different inputs and modifications
5. **Review and optimize** your solutions

---
</details>

## 🏗️ Problem Categories

### 🟢 Foundation Level (Problems 1-8)

*Master the basics of C programming with simple arithmetic and geometry*  

| # | Problem | Difficulty | Key Concepts |
|---|---------|------------|--------------|
| 01 | [Sum of Two Numbers](01_Sum_of_2_Given_Number.c) | ⭐ | Basic I/O, Float operations |
| 02 | [Cube of a Number](02_Cube_of_N.c) | ⭐ | Integer arithmetic, Power operations |
| 03 | [Perimeter of Square](03_Perimeter_of_Square.c) | ⭐ | Geometry formulas, Float precision |
| 04 | [Perimeter of Rectangle](04_Perimeter_of_rectangle.c) | ⭐ | Multiple inputs, Formula application |
| 05 | [Area of Rectangle](05_Area_of_rectangle.c) | ⭐ | Basic multiplication, Geometry |
| 06 | [Area of Square](06_Area_of_Square.c) | ⭐ | Square operations, Formatting |
| 07 | [Area of Circle](07_Area_of_circle.c) | ⭐⭐ | `#define` preprocessor, Pi constant |
| 08 | [Circumference of Circle](08_Circumference_of_circle.c) | ⭐⭐ | Mathematical constants, Circle geometry |

**🎯 Focus Areas:** Basic syntax, simple calculations, understanding input/output patterns

---

### 🟡 Intermediate Level (Problems 9-16)

*Apply mathematical concepts and explore advanced operations*  

| # | Problem | Difficulty | Key Concepts |
|---|---------|------------|--------------|
| 09 | [Calculating Percentage](09_Calculating_Percentage.c) | ⭐⭐ | Multiple inputs, Percentage calculations |
| 10 | [Simple Interest](10_Calculate_Simple_Interest.c) | ⭐⭐ | Financial mathematics, Formula implementation |
| 11 | [Find Remainder (Manual)](11_Find_Remainder.c) | ⭐⭐⭐ | Division logic, Mathematical reasoning |
| 12 | [Find Remainder (Modulus)](12_Finding_remainder_using_moduls.c) | ⭐⭐ | Modulus operator, Comparison with manual method |
| 13 | [Half of Number](13_Half_of_Number.c) | ⭐⭐ | Division operations, Float precision |
| 14 | [Fractional Part Extract](14_Fractional_Part_of_Float_N.c) | ⭐⭐⭐ | Type casting, Float manipulation |
| 15 | [Volume of Cylinder](15_Volume_of_cylinder.c) | ⭐⭐⭐ | 3D geometry, Complex formulas |
| 16 | [Volume of Sphere](16_Volume_of_Sphere.c) | ⭐⭐⭐ | `const` keyword, Advanced geometry |

**🎯 Focus Areas:** Complex calculations, type conversions, mathematical logic

---

### 🟠 Advanced Level (Problems 17-22)  

*Master temperature conversions and formula transformations*  

| # | Problem | Difficulty | Key Concepts |
|---|---------|------------|--------------|
| 17 | [Celsius to Fahrenheit](17_Celsius_to_Fahrenheit.c) | ⭐⭐⭐ | Temperature conversion, Formula application |
| 18 | [Celsius to Kelvin](18_Celsius_to_Kelvin.c) | ⭐⭐⭐ | Scientific units, Precision handling |
| 19 | [Fahrenheit to Celsius](19_Fahrenheit_to_Celsius.c) | ⭐⭐⭐ | Reverse formula calculation |
| 20 | [Fahrenheit to Kelvin](20_Fahrenheit_to_Kelvin.c) | ⭐⭐⭐⭐ | Multi-step conversions |
| 21 | [Kelvin to Celsius](21_Kelvin_to_Celsius.c) | ⭐⭐⭐ | Scientific temperature scales |
| 22 | [Kelvin to Fahrenheit](22_Kelvin_to_Fahrenheit.c) | ⭐⭐⭐⭐ | Complex formula implementation |

**🎯 Focus Areas:** Formula manipulation, scientific calculations, precision control

---

## 💻 Code Examples

### 🔹 Pattern 1: Basic Input/Output

```c
#include <stdio.h>
int main() {
    float number;
    printf("Enter a number: ");
    scanf("%f", &number);
    printf("Result: %.2f\n", number * 2);
    return 0;
}
```

### 🔹 Pattern 2: Mathematical Calculations

```c
#include <stdio.h>
#define PI 22.0/7.0

int main() {
    float radius = 5.0;
    float area = PI * radius * radius;
    printf("Area: %.2f\n", area);
    return 0;
}
```

### 🔹 Pattern 3: Multiple Inputs

```c
#include <stdio.h>
int main() {
    float length, breadth;
    printf("Enter length: ");
    scanf("%f", &length);
    printf("Enter breadth: ");
    scanf("%f", &breadth);
    printf("Area: %.2f\n", length * breadth);
    return 0;
}
```

### 🔹 Pattern 4: Division Without Modulus Operator

```c
int num = 17, divisor = 5;
int quotient = num / divisor;
int remainder = num - (quotient * divisor);
printf("Remainder: %d\n", remainder);
```

### 🔹 Pattern 5: Financial Computation

```c
float principal = 1000, rate = 5, time = 2;
float si = (principal * rate * time) / 100;
printf("Simple Interest: %.2f\n", si);
```

---

## 💡 Key Concepts Covered

| Concept | Problems | Description |
|---------|----------|-------------|
| **Basic I/O** | 1-22 | `printf()`, `scanf()`, format specifiers |
| **Data Types** | 1-22 | `int`, `float`, type selection |
| **Arithmetic Ops** | 1-16 | `+`, `-`, `*`, `/`, operator precedence |
| **Preprocessor** | 7, 8, 15 | `#define`, macro definitions |
| **Constants** | 16 | `const` keyword usage |
| **Type Casting** | 14 | `(int)`, explicit conversions |
| **Modulus** | 11, 12 | `%` operator, remainder calculations |
| **Formatting** | 1-22 | Precision control with `%.2f`, `%.3f` |

---

## 📊 Progress Tracker

Track your learning journey:

| 🎯 **Learning Milestone** | 📚 **Requirements** | 🏆 **Skill Level** |
|---------------------------|---------------------|---------------------|
| Foundation Mastery | Complete 8/8 Basic Problems | 🥉 Bronze Achiever |
| Intermediate Proficiency | Complete 8/8 Mathematical Problems | 🥈 Silver Programmer |
| Advanced Expertise | Complete 6/6 Temperature Conversions | 🥇 Gold Programmer |
| Concept Mastery | Master 8/8 Core Concepts | 🏆 Champion |
| Module Completion | All 22 Problems Solved | 🌟 Ready for Next Module |

---

## 🎓 What's Next?

Ready to level up your C programming journey? Here's your personalized learning roadmap:

### 🚀 Immediate Next Challenge

- **[🔀 Decision Making & Conditionals](../03_If-Else)** - Master C fundamentals through 22 progressive coding challenges with detailed solutions and comprehensive explanations

### 🌟 Topics Awaiting You

- **Loops**: `for`, `while`, `do-while` loops
- **Patterns**: Creating patterns using loops
- **Functions**: Reusable code blocks
- **Recursion**: Solving problems using self-referential functions

---

## 🤝 Resources & Support

<div align="center">

| 📚 **Resource Type** | 🔗 **Access Point** | 📝 **Description** |
|---------------------|---------------------|-------------------|
| **Bug Reports & Questions** | [Open an Issue](https://github.com/rohit528590/CGenesis/issues) | Report bugs or ask technical questions |
| **Community Support** | [GitHub Issues](https://github.com/rohit528590/CGenesis/issues) | Get help with coding problems and technical questions |
| **Contribute** | [Fork Repository](https://github.com/rohit528590/CGenesis/fork) | Help improve the course for everyone |

</div>

---

<div align="center">

## 🎉 **Ready to Start Your Programming Journey?**

**Follow the exact progression from your carefully crafted examples!**

[![Start with Foundation Level](https://img.shields.io/badge/%F0%9F%8E%AF%20Start%20with-Foundation%20Level-blue?style=for-the-badge)](01_Sum_of_2_Given_Number.c)
[![Progress to Intermediate](https://img.shields.io/badge/%F0%9F%A7%A8%20Progress%20to-Intermediate%20Level-green?style=for-the-badge)](09_Calculating_Percentage.c)
[![Master Advanced Level](https://img.shields.io/badge/%F0%9F%8F%86%20Master-Advanced%20Level-orange?style=for-the-badge)](17_Celsius_to_Fahrenheit.c)

### 🌟 **Remember:**

*Every expert programmer started exactly where you are now. The key is consistent practice and curiosity to learn!*

---

### 💪 Your Structured Learning Path

<div align="center">

```
🟢 Foundation Level      🟡 Intermediate Level      🟠 Advanced Level
   (Problems 1-8)          (Problems 9-16)           (Problems 17-22)
       ↓                        ↓                         ↓
   Basic I/O & Math      Complex Calculations    Temperature Conversions
```

**📈 Structured Path:** `Foundation Mastery` → `Mathematical Proficiency` → `Advanced Applications`

</div>

---

### 🔗 **Support This Project**

[![GitHub stars](https://img.shields.io/github/stars/rohit528590/CGenesis?style=social)](https://github.com/rohit528590/CGenesis/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/rohit528590/CGenesis?style=social)](https://github.com/rohit528590/CGenesis/network/members)

**⭐ [Star this Repository](https://github.com/rohit528590/CGenesis) to show your support!**

*Happy Coding, future programmer! 🚀👨‍💻👩‍💻*  

<sub>Built with ❤️ for C programming students | Based on proven learning progression | <a href="https://github.com/rohit528590/CGenesis">CGenesis Project</a></sub>
</div>
