![C++](https://img.shields.io/badge/C++-98-blue?logo=cplusplus) ![License](https://img.shields.io/badge/License-Free-red) ![STL](https://img.shields.io/badge/STL-Approved-green)  

# C++ Module 09 - Advanced STL & Algorithmic Challenges

Welcome to **C++ Module 09**, the final module in our **C++ journey**! 🎉 This module takes your **STL and algorithmic skills** to the next level with **real-world data processing, mathematical expressions, and sorting algorithms**. Brace yourself for **Bitcoin price calculations, Reverse Polish Notation evaluation, and the Ford-Johnson sorting algorithm**! 🚀

---

## 💰 Bitcoin Exchange (ex00)

### 🔄 The Challenge
Create a **BitcoinExchange** program that evaluates the value of **Bitcoin** over time using a **CSV-based historical price database**.

### 🔹 Key Features
- **Reads an input file (`date | value`)** to evaluate Bitcoin prices.
- **Uses a historical CSV database** for price lookups.
- **Finds the closest past date** if an exact date is unavailable.
- **Error Handling:**
  - **Invalid dates** (`2001-42-42` → Error: bad input).
  - **Negative values** (`-1` → Error: not a positive number).
  - **Exceeding limits** (`2147483648` → Error: too large a number).

#### ⚡ Sample Usage
```bash
$> ./btc input.txt
2011-01-03 => 3 = 0.9
2011-01-03 => 2 = 0.6
2011-01-03 => 1 = 0.3
2011-01-09 => 1 = 0.32
Error: not a positive number.
Error: bad input => 2001-42-42
2012-01-11 => 1 = 7.1
Error: too large a number.
```

### 🏆 The Takeaway
- **File Parsing & Data Mapping:** Process structured input efficiently.
- **Container-based Lookup:** Utilize **maps or vectors** for date-based searches.
- **Error Handling & Edge Cases:** Ensure robustness.

---

## ➕ Reverse Polish Notation (RPN) (ex01)

### 🧮 The Challenge
Implement a **Reverse Polish Notation (RPN) calculator** that evaluates mathematical expressions without parentheses.

### 🔹 Key Features
- **Parses an RPN expression from the command line.**
- **Supports basic operations:** `+ - / *`
- **Uses a stack-based approach** for efficient computation.
- **Handles errors:**
  - Invalid characters (`(1 + 1)` → Error).
  - Incorrect format (`1 2 * *` → Error).

#### ⚡ Sample Usage
```bash
$> ./RPN "8 9 * 9 - 9 - 9 - 4 - 1 +"
42
$> ./RPN "7 7 * 7 -"
42
$> ./RPN "1 2 * 2 / 2 * 2 4 - +"
0
$> ./RPN "(1 + 1)"
Error
```

### 🏆 The Takeaway
- **Stack-based Evaluation:** Efficient handling of RPN expressions.
- **Error Handling:** Prevent invalid expressions.
- **No Need for Parentheses:** Order of operations is inherently correct.

---

## 🔀 PmergeMe (ex02)

### 🚀 The Challenge
Implement **Merge-Insertion Sort (Ford-Johnson algorithm)** to efficiently sort large sequences of numbers.

### 🔹 Key Features
- **Uses at least TWO different STL containers.**
- **Sorts a large sequence of numbers** (handles 3000+ integers efficiently).
- **Displays processing time** for each container used.
- **Handles Errors:**
  - **Negative numbers** (`-1 2` → Error).
  - **Non-integer values**.
  - **Duplicate handling** (optional implementation choice).

#### ⚡ Sample Usage
```bash
$> ./PmergeMe 3 5 9 7 4
Before: 3 5 9 7 4
After: 3 4 5 7 9
Time to process a range of 5 elements with std::[...] : 0.00031 us
Time to process a range of 5 elements with std::[...] : 0.00014 us
```

#### 📊 Large Dataset Example
```bash
$> ./PmergeMe `shuf -i 1-100000 -n 3000 | tr "\n" " "`
Before: 141 79 526 321 [...]
After: 79 141 321 526 [...]
Time to process a range of 3000 elements with std::[...] : 62.14389 us
Time to process a range of 3000 elements with std::[...] : 69.27212 us
```

### 🏆 The Takeaway
- **Optimized Sorting:** Ford-Johnson is one of the fastest sorting algorithms.
- **Container Selection Matters:** Compare efficiency between STL containers.
- **Performance Measurement:** Measure and compare execution times.

---

## 🎯 The Takeaway
This module challenges you to implement **real-world applications** using **efficient algorithms and STL containers**. By now, you should be confident in:
✅ **File I/O, data parsing, and structured lookups.**
✅ **Stack-based mathematical evaluations (RPN).**
✅ **Implementing and benchmarking advanced sorting algorithms.**

If you completed this module, **congratulations!** 🎉 You have mastered **advanced C++ STL and algorithms**. The journey was long, but you are now a **proficient C++ developer**! 🚀

