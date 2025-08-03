# 🎨 Pattern Printing Practice in C

Welcome to the **Pattern Printing Practice Problems** module of _The Ultimate C Programming Language_ course! Here you'll find a diverse collection of C programs focused on mastering pattern printing—a key skill for logic building, interviews, and coding competitions.

---

## ✨ What is Pattern Printing?

Pattern printing involves using loops and logic to display visually structured outputs (shapes, numbers, alphabets, etc.) in the console. It sharpens your understanding of nested loops, conditionals, and creative problem-solving.

---

## 🧩 Pattern Types Covered

- **Star Patterns:** Squares, rectangles, triangles, pyramids, diamonds, crosses, plus, rhombus, hollow shapes
- **Number Patterns:** Pyramids, triangles, squares, mirrored, special number arrangements
- **Alphabet Patterns:** Pyramids, triangles, squares, mixed with numbers
- **Special Patterns:** 0 & 1 triangles, Floyd’s triangle, custom creative designs

---

## 🖥️ Pattern Printing Examples

### 1. Solid Star Square

```c
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        printf("* ");
    }
    printf("\n");
}
```

### 2. Number Triangle

```c
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        printf("%d ", j);
    }
    printf("\n");
}
```

### 3. Alphabet Pyramid

```c
for (int i = 1; i <= n; i++) {
    char ch = 'A';
    for (int j = 1; j <= i; j++) {
        printf("%c ", ch++);
    }
    printf("\n");
}
```

### 4. Hollow Rectangle

```c
for (int i = 1; i <= rows; i++) {
    for (int j = 1; j <= cols; j++) {
        if (i == 1 || i == rows || j == 1 || j == cols)
            printf("* ");
        else
            printf("  ");
    }
    printf("\n");
}
```

### 5. Mirrored Left Triangle

```c
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) printf("  ");
    for (int k = 1; k <= i; k++) printf("* ");
    printf("\n");
}
```

---

## 🗂️ File Reference Guide

### 🟢 Easy Patterns

| #  | File Name                                         | Pattern Type / Description                       |
|----|---------------------------------------------------|-------------------------------------------------|
| 1  | [`01_Solid_Rectangle.c`](01_Solid_Rectangle.c)           | Solid rectangle of stars                         |
| 2  | [`02_Solid_Square.c`](02_Solid_Square.c)                 | Solid square of stars                            |
| 3  | [`03_Number_Square.c`](03_Number_Square.c)               | Square of numbers                                |
| 4  | [`04_Star_Triangle.c`](04_Star_Triangle.c)               | Simple star triangle                             |
| 5  | [`05_Star_Triangle_Ulta.c`](05_Star_Triangle_Ulta.c)     | Inverted star triangle                           |
| 6  | [`06_Number_Triangle.c`](06_Number_Triangle.c)           | Number triangle                                  |
| 7  | [`07_Number_Triangle_Ulta.c`](07_Number_Triangle_Ulta.c) | Inverted number triangle                         |
| 8  | [`08_Odd_Number_Triangle.c`](08_Odd_Number_Triangle.c)   | Triangle of odd numbers                          |
| 9  | [`09_Alphabet_Square.c`](09_Alphabet_Square.c)           | Square of alphabets                              |
| 10 | [`10_Alphabet_Triangle.c`](10_Alphabet_Triangle.c)       | Alphabet triangle                                |
| 11 | [`11_Alphabet_&_Number_Triangle.c`](11_Alphabet_&_Number_Triangle.c) | Mixed alphabet and number triangle    |
| 12 | [`12_Star_Plus.c`](12_Star_Plus.c)                       | Star plus (+) pattern                            |
| 13 | [`13_Hollow_Rectangle.c`](13_Hollow_Rectangle.c)         | Hollow rectangle of stars                        |

---

### 🟡 Medium Patterns

| #  | File Name                                         | Pattern Type / Description                       |
|----|---------------------------------------------------|-------------------------------------------------|
| 14 | [`14_Star_Cross.c`](14_Star_Cross.c)                     | Star cross pattern                               |
| 15 | [`15_Floyd's_Triangle.c`](15_Floyd's_Triangle.c)         | Floyd's triangle (number sequence)               |
| 16 | [`16_Floyd's_Triangle2.c`](16_Floyd's_Triangle2.c)       | Floyd's triangle (variation)                     |
| 17 | [`17_0_&_1_Triangle.c`](17_0_&_1_Triangle.c)             | Alternating 0 & 1 triangle                       |
| 18 | [`18_Star_Triangle_Mast.c`](18_Star_Triangle_Mast.c)     | Star triangle (mast variation)                   |
| 19 | [`19_Rhombus.c`](19_Rhombus.c)                           | Rhombus of stars                                 |
| 20 | [`20_Alphabet_Triangle_Mast.c`](20_Alphabet_Triangle_Mast.c) | Alphabet triangle (mast variation)           |
| 21 | [`21_Star_Pyramid.c`](21_Star_Pyramid.c)                 | Centered star pyramid                            |
| 22 | [`22_Number_Pyramid.c`](22_Number_Pyramid.c)             | Centered number pyramid                          |
| 23 | [`23_Alphabet_Pyramid.c`](23_Alphabet_Pyramid.c)          | Alphabet pyramid                                 |
| 24 | [`24_Number_Pyramid_Mast.c`](24_Number_Pyramid_Mast.c)   | Number pyramid (mast variation)                  |
| 25 | [`25_Alphabet_Pyramid_Mast.c`](25_Alphabet_Pyramid_Mast.c) | Alphabet pyramid (mast variation)              |
| 26 | [`26_Star_Diamond.c`](26_Star_Diamond.c)                 | Star diamond shape                               |
| 27 | [`27_Start_Pyramid_Mast.c`](27_Start_Pyramid_Mast.c)     | Star pyramid (mast variation)                    |
| 28 | [`28_Number's_Pyramid_Mast.c`](28_Number's_Pyramid_Mast.c) | Number pyramid (creative/mast variation)      |
| 29 | [`29_Alphabeti_Pyramid_Mast.c`](29_Alphabeti_Pyramid_Mast.c) | Alphabet pyramid (creative/mast variation)   |
| 30 | [`30_Number_Pyramid_Mast_HW.c`](30_Number_Pyramid_Mast_HW.c) | Number pyramid (homework/variation)           |

---

### 🔴 Hard Patterns

| #  | File Name                                         | Pattern Type / Description                       |
|----|---------------------------------------------------|-------------------------------------------------|
| 31 | [`31_left_triangle_mirror_pattern.c`](31_left_triangle_mirror_pattern.c) | Left triangle mirror pattern         |
| 32 | [`32_Number_Mess.c`](32_Number_Mess.c)                   | Complex number arrangement                       |
| 33 | [`33_Number_Mess_2.c`](33_Number_Mess_2.c)               | Variation of number mess                         |

---

## 🏆 Best Practices for Pattern Printing

- **Visualize First:** Sketch the pattern on paper before coding.
- **Break Down the Problem:** Identify rows, columns, and the logic for each cell.
- **Use Nested Loops:** Most patterns require an outer loop (rows) and inner loop (columns/characters).
- **Start Simple:** Begin with basic shapes, then add complexity (mirroring, hollow, numbers, alphabets).
- **Comment Your Code:** Explain your logic, especially for tricky index calculations.
- **Test with Different Sizes:** Try various input values to ensure your pattern scales.

---

## 💡 Tips for Learners

- Practice regularly to build speed and confidence.
- Experiment with modifying patterns or creating your own.
- Use print statements to debug and understand loop flow.
- Challenge yourself with symmetrical, mirrored, or combined patterns.
- Review others’ solutions for new techniques and inspiration.

---

Happy Pattern Printing! 🖨️✨
