# 🧩 If-Else Practice Problems in C

<div align="center">

[![C Programming](https://img.shields.io/badge/Language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Practice Problems](https://img.shields.io/badge/Type-Practice%20Problems-green.svg)](https://github.com/rohit528590/CGenesis/04_If-Else_Practice_Problems)
[![Conditionals](https://img.shields.io/badge/Topic-Decision%20Logic-orange.svg)](https://github.com/rohit528590/CGenesis/03_If-Else)
[![Files](https://img.shields.io/badge/Code%20Files-24-orange.svg)](https://github.com/rohit528590/CGenesis/tree/main/04_If-Else_Practice_Problems)

![Made for Students](https://img.shields.io/badge/Made%20for-Students-purple.svg?style=flat-square)
![Hands On Learning](https://img.shields.io/badge/Learning%20Style-Hands%20On-blue.svg?style=flat-square)
[![Beginner Friendly](https://img.shields.io/badge/Level-Beginner%20Friendly-brightgreen.svg?style=flat-square)](README.md)

</div>

> **Master Conditional Logic Through Real-World Challenges**

Welcome to the **If-Else Practice Problems** module of CGenesis! This comprehensive collection features carefully curated coding challenges designed to help you master conditional logic in C programming. Each problem serves as a stepping stone toward building strong programming fundamentals.

---

## 🧭 Table of Contents

- [🎯 Learning Objectives](#learning-objectives)
- [📚 Problem Categories](#problem-categories)
- [💻 Essential Code Examples](#essential-code-examples)
- [📈 Progress Tracking](#progress-tracking)
- [🤝 Resources & Support](#resources--support)

---

## 🎯 Learning Objectives

By completing these practice problems, you will:

- ✅ **Master Conditional Logic**: Gain proficiency with `if`, `else if`, `else`, and logical operators
- ✅ **Develop Problem-Solving Skills**: Learn to break complex problems into manageable steps
- ✅ **Build Programming Confidence**: Practice with real-world scenarios and edge cases
- ✅ **Think Like a Developer**: Develop logical reasoning and algorithmic thinking

---

## ⚡ Quick Start Guide

### Prerequisites

- Any C compiler (GCC, Dev-C++, Code::Blocks)
- Text editor or IDE
- Enthusiasm to learn! 🔥

### Getting Started

```bash
# 1. Clone the repository
git clone https://github.com/rohit528590/CGenesis.git

# 2. Navigate to the project
cd CGenesis

# 3. Start with Phase 1
# Open 01_First.c and begin your journey!
```

---

## 📚 Problem Categories

### 🟢 **Beginner Level** - Foundation Building

_Perfect for building confidence with basic conditional statements_  

| Problem # | File Name | Focus Area | Key Concepts |
|-----------|-----------|------------|--------------|
| 01 | [`01_License_or_not.c`](01_License_or_not.c) | Age Validation | Simple if-else conditions |
| 02 | [`02_Three_Digits_or_not.c`](02_Three_Digits_or_not.c) | Number Range | Boundary conditions |
| 03 | [`03_Absolute_value.c`](03_Absolute_value.c) | Mathematical Logic | Positive/negative checks |
| 04 | [`04_Average_of_three_numbers.c`](04_Average_of_three_numbers.c) | Arithmetic Operations | Basic calculations with conditions |
| 05 | [`05_Area_vs_perimeter_rectangle.c`](05_Area_vs_perimeter_rectangle.c) | Geometric Comparisons | Formula-based conditionals |
| 06 | [`06_Character_digit_or_not.c`](06_Character_digit_or_not.c) | Character Validation | ASCII value checking |
| 07 | [`07_Character_lowercase_or_not.c`](07_Character_lowercase_or_not.c) | Character Classification | Case sensitivity |
| 08 | [`08_Even_or_Odd.c`](08_Even_or_Odd.c) | Modulo Operations | Basic divisibility |
| 09 | [`09_Dividend_divisible_by_divisor.c`](09_Dividend_divisible_by_divisor.c) | Division Logic | Remainder operations |
| 10 | [`10_Divisible_by_5.c`](10_Divisible_by_5.c) | Single Divisibility | Specific number patterns |
| 11 | [`11_Divisible_by_5_and_3.c`](11_Divisible_by_5_and_3.c) | AND Logic | Multiple conditions |
| 12 | [`12_Divisible_by_5_or_3_not_15.c`](12_Divisible_by_5_or_3_not_15.c) | Complex Logic | Exclusion patterns |
| 13 | [`13_Logical_operators_practice.c`](13_Logical_operators_practice.c) | Operator Mastery | &&, \|\|, ! operators |

### 🟡 **Intermediate Level** - Skill Enhancement

_Develop more sophisticated conditional reasoning_  

| Problem # | File Name | Focus Area | Key Concepts |
|-----------|-----------|------------|--------------|
| 14 | [`14_Profit_or_loss.c`](14_Profit_or_loss.c) | Business Logic | Financial calculations |
| 15 | [`15_Triangle_validation.c`](15_Triangle_validation.c) | Geometric Rules | Triangle inequality theorem |
| 16 | [`16_Leap_year_checker.c`](16_Leap_year_checker.c) | Calendar Logic | Complex date rules |
| 17 | [`17_Grade_system.c`](17_Grade_system.c) | Nested Conditions | Multi-level decision making |
| 18 | [`18_Greatest_of_three.c`](18_Greatest_of_three.c) | Comparison Logic | Multiple variable comparison |
| 19 | [`19_Tax_calculation.c`](19_Tax_calculation.c) | Slab-based Logic | Progressive calculations |
| 20 | [`20_Pass_fail_system.c`](20_Pass_fail_system.c) | Academic Logic | Multi-criteria evaluation |
| 21 | [`21_Age_comparison.c`](21_Age_comparison.c) | Comparative Analysis | Relative comparisons |

### 🔴 **Advanced Level** - Mastery Challenges

_Polish your skills with complex scenarios_  

| Problem # | File Name | Focus Area | Key Concepts |
|-----------|-----------|------------|--------------|
| 22 | [`22_Min_finder.c`](22_Min_finder.c) | Optimization Logic | Efficient comparisons |
| 23 | [`23_Max_finder.c`](23_Max_finder.c) | Maximum Selection | Advanced comparison techniques |
| 24 | [`24_MinMax_algorithm.c`](24_MinMax_algorithm.c) | Algorithm Design | Simultaneous min/max finding |

---

## 💻 Essential Code Examples

Get familiar with common conditional patterns through these bite-sized examples:

### 🔍 **Basic Comparisons**

```c
// Find minimum of two numbers
int a = 5, b = 8;
printf("Minimum: %d\n", (a < b) ? a : b);
```

### 🧮 **Complex Logical Conditions**

```c
// Check divisibility by 5 or 3 but not 15
int n = 30;
if (((n % 5 == 0) || (n % 3 == 0)) && (n % 15 != 0)) {
    printf("Condition satisfied\n");
} else {
    printf("Condition not satisfied\n");
}
```

### 📊 **Multi-Level Grading**

```c
// Grade assignment system
int marks = 85;
if (marks >= 90)      printf("Grade: A+\n");
else if (marks >= 80) printf("Grade: A\n");
else if (marks >= 70) printf("Grade: B\n");
else if (marks >= 60) printf("Grade: C\n");
else                  printf("Grade: F\n");
```

### 📅 **Date Calculations**

```c
// Leap year validation
int year = 2024;
if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    printf("%d is a leap year\n", year);
} else {
    printf("%d is not a leap year\n", year);
}
```

### 💰 **Business Logic**

```c
// Profit/Loss calculation
int cost_price = 100, selling_price = 120;
int difference = selling_price - cost_price;

if (difference > 0)      printf("Profit: $%d\n", difference);
else if (difference < 0) printf("Loss: $%d\n", -difference);
else                     printf("Break-even (No profit, no loss)\n");
```

---

## 📈 Progress Tracking

Keep track of your learning journey:

| 🎯 **Milestone** | 📚 **Requirements** | 🏆 **Achievement Level** |
|------------------|---------------------|---------------------------|
| **Foundation Builder** | Complete all 13 basic problems | 🥉 Bronze Conditional Master |
| **Logic Developer** | Master 8 intermediate challenges | 🥈 Silver Decision Expert |
| **Algorithm Expert** | Conquer 3 complex algorithms | 🥇 Gold Conditional Wizard |
| **Code Craftsman** | Refactor and optimize solutions | 💎 Platinum Code Architect |
| **Documentation Master** | Comment all code thoroughly | 🌟 Ultimate If-Else Champion |

---

## 🤝 Resources & Support

<div align="center">

| 📚 **Resource Type** | 🔗 **Access Point** | 📝 **Description** |
|---------------------|---------------------|-------------------|
| **🐛 Bug Reports & Questions** | [Open an Issue](https://github.com/rohit528590/CGenesis/issues) | Report bugs or ask technical questions |
| **💬 Community Support** | [GitHub Issues](https://github.com/rohit528590/CGenesis/issues) | Get help with coding problems and technical questions |
| **🤝 Contribute** | [Fork Repository](https://github.com/rohit528590/CGenesis/fork) | Help improve the course for everyone |

</div>

---

<div align="center">

### 🌟 Ready to Master Conditional Logic?

**Choose your starting point and begin your coding journey!**

[![Foundation](https://img.shields.io/badge/🟢%20Foundation-Problems%201--13-success?style=for-the-badge)](01_License_or_not.c)
[![Intermediate](https://img.shields.io/badge/🟡%20Intermediate-Problems%2014--21-warning?style=for-the-badge)](14_Profit_or_loss.c)
[![Advanced](https://img.shields.io/badge/🔴%20Advanced-Problems%2022--24-critical?style=for-the-badge)](22_Min_finder.c)

---

### 🔗 **Support This Project**

<div align="center">

[![GitHub stars](https://img.shields.io/github/stars/rohit528590/CGenesis?style=social)](https://github.com/rohit528590/CGenesis/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/rohit528590/CGenesis?style=social)](https://github.com/rohit528590/CGenesis/network/members)

**⭐ [Star this Repository](https://github.com/rohit528590/CGenesis) to show your support!**

</div>

*Happy Coding, future programmer! 🚀👨‍💻👩‍💻*  

</div>

<div align="center">
<sub>Built with ❤️ for C programming students | Based on proven learning progression | <a href="https://github.com/rohit528590/CGenesis">CGenesis Project</a></sub>
</div>
