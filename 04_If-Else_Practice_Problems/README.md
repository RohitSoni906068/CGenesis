# 🧩 If-Else Practice Problems in C

<div align="center">

![Conditional Logic](https://img.shields.io/badge/Focus-Conditional_Logic-ff6b6b?style=for-the-badge&logo=c&logoColor=white)
![Problems](https://img.shields.io/badge/Problems-24-4ecdc4?style=for-the-badge)
![Difficulty](https://img.shields.io/badge/Difficulty-Beginner_to_Advanced-45b7d1?style=for-the-badge)
![Practice](https://img.shields.io/badge/Type-Practice_Problems-9b59b6?style=for-the-badge)

</div>

> **Master Conditional Logic Through Real-World Challenges**

Welcome to the **If-Else Practice Problems** module of _The Ultimate C Programming Language_ course! This comprehensive collection features carefully curated coding challenges designed to help you master conditional logic in C programming. Each problem serves as a stepping stone toward building strong programming fundamentals.

---

## 🎯 Learning Objectives

By completing these practice problems, you will:

- ✅ **Master Conditional Logic**: Gain proficiency with `if`, `else if`, `else`, and logical operators
- ✅ **Develop Problem-Solving Skills**: Learn to break complex problems into manageable steps
- ✅ **Build Programming Confidence**: Practice with real-world scenarios and edge cases
- ✅ **Think Like a Developer**: Develop logical reasoning and algorithmic thinking

---

## 🚀 Quick Start Examples

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

## 🏆 Best Practices & Coding Standards

### **Code Organization**

- 📝 **Use Descriptive Names**: Choose meaningful variable and function names
- 🗨️ **Comment Strategically**: Explain complex logic, not obvious operations
- 📐 **Maintain Consistency**: Follow consistent indentation and formatting
- 🧪 **Include Test Cases**: Always test with various inputs, including edge cases

### **Debugging Strategies**

```c
// Example: Adding debug prints
int number = 15;
printf("DEBUG: Testing number %d\n", number);  // Debug output

if (number % 5 == 0) {
    printf("DEBUG: Divisible by 5\n");  // Trace execution
    printf("Number is divisible by 5\n");
}
```

### **Error Prevention**

- ⚠️ **Validate Input**: Always check for invalid or unexpected inputs
- 🔍 **Test Edge Cases**: Include boundary values (0, negative numbers, etc.)
- 🛡️ **Handle Division by Zero**: Prevent runtime errors in mathematical operations

---

## 💡 Study Tips for Maximum Learning

### **Progressive Learning Path**

1. **Start Simple**: Begin with basic if-else statements
2. **Add Complexity**: Gradually introduce logical operators
3. **Practice Patterns**: Recognize common conditional patterns
4. **Optimize Solutions**: Refactor code for better readability and efficiency

### **Problem-Solving Methodology**

1. 📖 **Understand the Problem**: Read requirements carefully
2. 🎯 **Identify Conditions**: List all decision points
3. 📝 **Plan Logic Flow**: Create pseudocode or flowchart
4. 💻 **Implement Solution**: Write clean, readable code
5. 🧪 **Test Thoroughly**: Verify with multiple test cases
6. 🔄 **Review & Refactor**: Improve code quality

---

## 🛠️ Development Environment Setup

### **Recommended Tools**

- **Compiler**: GCC (GNU Compiler Collection)
- **IDE Options**: Code::Blocks, Dev-C++, Visual Studio Code
- **Online Platforms**: Repl.it, CodeBlocks Online, OnlineGDB

### **Compilation Commands**

```bash
# Basic compilation
gcc filename.c -o program_name

# With debugging symbols
gcc -g filename.c -o program_name

# With warnings enabled
gcc -Wall filename.c -o program_name
```

---

## 📈 Progress Tracking

Keep track of your learning journey:

- [ ] **Beginner Level**: Complete all 13 basic problems
- [ ] **Intermediate Level**: Master 8 intermediate challenges  
- [ ] **Advanced Level**: Conquer 3 complex algorithms
- [ ] **Code Review**: Refactor and optimize your solutions
- [ ] **Documentation**: Comment all your code thoroughly

---

## 🤝 Contributing & Feedback

Found an interesting problem variation or improvement? We welcome contributions!

- 🐛 **Report Issues**: Found a bug? Let us know!
- 💡 **Suggest Problems**: Have ideas for new challenges?
- 📚 **Improve Documentation**: Help make explanations clearer
- 🎯 **Share Solutions**: Multiple approaches welcome

---

<div align="center">

### 🌟 Ready to Master Conditional Logic?

**Choose your starting point and begin your coding journey!**

[![Beginner](https://img.shields.io/badge/🟢%20Beginner-Problems%201--13-success?style=for-the-badge)](01_License_or_not.c)
[![Intermediate](https://img.shields.io/badge/🟡%20Intermediate-Problems%2014--21-warning?style=for-the-badge)](14_loss_or_profit.c)
[![Advanced](https://img.shields.io/badge/🔴%20Advanced-Problems%2022--24-critical?style=for-the-badge)](22_Min_of_two_numbers.c)

### 🎯 Learning Path Recommendation

**New to Programming?** → Start with 🟢 **Beginner** problems to build confidence  
**Have Basic Knowledge?** → Jump to 🟡 **Intermediate** for skill enhancement  
**Ready for Challenge?** → Tackle 🔴 **Advanced** problems for mastery

---

_Remember: Every expert was once a beginner. Keep practicing, stay curious, and enjoy the journey!_ 🚀

**Happy Coding!** 💻✨

</div>
