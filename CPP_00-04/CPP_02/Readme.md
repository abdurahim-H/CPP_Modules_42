![C++](https://img.shields.io/badge/C++-98-blue?logo=cplusplus) ![License](https://img.shields.io/badge/License-Free-red) ![Zombies](https://img.shields.io/badge/Zombies-Approved-green) 

# C++ Module 02 - The Rise of Fixed-Point Arithmetic

Welcome to **C++ Module 02**, where we transcend the limitations of integers and floating-point numbers, diving into **fixed-point arithmetic**. This module introduces **operator overloading, ad-hoc polymorphism, and the Orthodox Canonical Form**, all while sharpening your understanding of numerical precision. Get ready to **reinvent numbers, overload operators, and master fixed-point calculations**.

---

## 🏗️ My First Class in Orthodox Canonical Form (ex00)

### 🔢 The Challenge
Numbers are more than just **integers and floating points**. Enter **fixed-point arithmetic**, a blend of precision and efficiency that traditional numbers struggle to provide. Your mission? **Implement a fixed-point number class** that follows the **Orthodox Canonical Form**.

### 🔹 Key Features
- **Private Members:**
  - An integer storing the fixed-point value.
  - A static constant integer (set to `8`) representing fractional bits.
- **Public Methods:**
  - Default constructor initializes the value to `0`.
  - Copy constructor for deep copying.
  - Copy assignment operator.
  - Destructor (logs destruction for debugging).
  - `getRawBits()` retrieves the raw integer value.
  - `setRawBits(int raw)` modifies the stored value.

#### ⚡ Sample Output
```bash
$> ./fixed_point
Default constructor called
Copy constructor called
Copy assignment operator called
getRawBits member function called
0
getRawBits member function called
0
getRawBits member function called
0
Destructor called
Destructor called
Destructor called
```

### 🏆 The Takeaway
- Understand **fixed-point arithmetic** and its advantages.
- Implement **Orthodox Canonical Form** for maintainability.
- Lay the groundwork for **operator overloading**.

---

## 🔄 Towards a More Useful Fixed-Point Number (ex01)

### 📈 The Challenge
Your previous implementation was functional but **useless**—it could only represent `0`. Now, we take a **big leap** by making our class actually **work with real numbers**.

### 🔹 Key Features
- **New Constructors:**
  - Accepts an **integer** and converts it to a fixed-point number.
  - Accepts a **floating-point number** and converts it to a fixed-point number.
- **Conversion Functions:**
  - `toFloat()` converts fixed-point to float.
  - `toInt()` converts fixed-point to an integer.
- **Operator Overloading:**
  - `<<` operator for streamlined output.

#### ⚡ Sample Output
```bash
$> ./fixed_point
Default constructor called
Int constructor called
Float constructor called
Copy constructor called
Copy assignment operator called
Float constructor called
Copy assignment operator called
Destructor called
a is 1234.43
b is 10
c is 42.4219
d is 10
a is 1234 as integer
b is 10 as integer
c is 42 as integer
d is 10 as integer
Destructor called
Destructor called
Destructor called
Destructor called
```

### 🏆 The Takeaway
- Learn **floating-point to fixed-point conversion**.
- Implement **constructor overloading**.
- Use **operator overloading** for seamless I/O operations.

---

## 🚀 Now We’re Talking (ex02)

### 🔢 The Challenge
Now that we can **store real numbers**, it’s time to **perform operations** on them. In this exercise, you’ll overload operators to allow **comparison, arithmetic, and increment/decrement** operations.

### 🔹 Key Features
- **Comparison Operators:**
  - Overload `>`, `<`, `>=`, `<=`, `==`, and `!=`.
- **Arithmetic Operators:**
  - Overload `+`, `-`, `*`, and `/`.
- **Increment/Decrement:**
  - Implement both **pre-increment/post-increment**.
  - Implement both **pre-decrement/post-decrement**.
- **Static Min/Max Functions:**
  - `min()` returns the smallest of two fixed-point numbers.
  - `max()` returns the largest of two fixed-point numbers.

#### ⚡ Sample Output
```bash
$> ./fixed_point
0
0.00390625
0.00390625
0.00390625
0.0078125
10.1016
10.1016
```

### 🏆 The Takeaway
- Master **operator overloading** for natural arithmetic expressions.
- Implement **increment/decrement operators** efficiently.
- Use **static member functions** for comparisons.

---

## 🎯 The Takeaway
This module introduces you to **operator overloading and fixed-point arithmetic**, pushing your understanding of C++ precision further. By now, you should be comfortable with:
✅ **Orthodox Canonical Form** for class design.
✅ **Floating-point to fixed-point conversion**.
✅ **Arithmetic and comparison operator overloading**.
✅ **Static member functions for utility operations**.

If you survived this, **congratulations!** 🎉 You’re now **one step closer to mastering C++ numerical precision**. The real challenges await! 🚀

