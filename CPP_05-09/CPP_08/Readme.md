![C++](https://img.shields.io/badge/C++-98-blue?logo=cplusplus) ![License](https://img.shields.io/badge/License-Free-red) ![STL](https://img.shields.io/badge/STL-Approved-green)  

# C++ Module 08 - Templated Containers, Iterators, and Algorithms

Welcome to **C++ Module 08**, where we explore **STL containers, iterators, and advanced algorithms**. This module focuses on **searching within containers, computing spans between values, and making STL stacks iterable**. Get ready to level up your **container manipulation skills**! 🚀

---

## 🔎 Easy Find (ex00)

### 🔄 The Challenge
Implement a **function template `easyfind`** that searches for an integer **inside a container**.

### 🔹 Key Features
- **Templated Function:** Works with any container of integers.
- **Parameters:**
  - A container (`T`) of integers.
  - An integer value to find.
- **Return Handling:**
  - **If found**, return an iterator pointing to the element.
  - **If not found**, either throw an exception or return an error value.
- **Supports STL sequential containers** (`vector`, `deque`, `list`).

#### ⚡ Sample Usage
```cpp
std::vector<int> vec = {1, 2, 3, 4, 5};
try {
    std::vector<int>::iterator it = easyfind(vec, 3);
    std::cout << "Found: " << *it << std::endl;
} catch (std::exception &e) {
    std::cerr << "Value not found" << std::endl;
}
```

#### 🏆 The Takeaway
- **Understanding Iterators**: Use `begin()` and `end()` for range searches.
- **Exception Handling**: Properly handle search failures.
- **Generic Programming**: Works with any STL sequential container.

---

## 📏 Span (ex01)

### 📜 The Challenge
Implement a **Span class** that **stores a set of numbers** and computes:
1. **Shortest Span** (smallest difference between two numbers).
2. **Longest Span** (largest difference between two numbers).

### 🔹 Key Features
- **Constructor:** `Span(unsigned int N)` → Allocates space for `N` integers.
- **addNumber(int num)** → Adds a number to the span.
- **shortestSpan()** → Returns the smallest difference between any two numbers.
- **longestSpan()** → Returns the largest difference between any two numbers.
- **Support for Bulk Addition:** Add multiple numbers using iterators.

#### ⚡ Sample Usage
```cpp
Span sp(5);
sp.addNumber(6);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl; // Output: 2
std::cout << sp.longestSpan() << std::endl; // Output: 14
```

### 🏆 The Takeaway
- **Iterator-Based Algorithms**: Use `std::sort()` for efficient span calculation.
- **Exception Handling**: Ensure spans are valid before computing them.
- **Efficient Bulk Insertions**: Use range-based insertions instead of looping.

---

## 🧪 Mutated Abomination (ex02)

### 🤖 The Challenge
The `std::stack` container **lacks iterators**, which limits its flexibility. Let’s fix that by creating a **MutantStack** class that makes `std::stack` iterable.

### 🔹 Key Features
- **MutantStack Class:**
  - Inherits from `std::stack<T>`.
  - Adds **begin()** and **end()** methods for iteration.
- **Iterator Support:**
  - Allows `for` loops and STL algorithms to be used on stacks.
- **Ensures Compatibility:**
  - Behaves identically to `std::stack`.
  - Can be used interchangeably with other iterable containers (`std::list`, `std::vector`).

#### ⚡ Sample Usage
```cpp
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
mstack.push(3);
mstack.push(5);
mstack.push(737);
mstack.push(0);

MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
}
```

### 🏆 The Takeaway
- **STL Extension**: Modify existing STL containers to add functionality.
- **Iterator Implementation**: Extend STL containers while keeping compatibility.
- **Enhanced Stack Usage**: Apply algorithms that were previously unavailable for `std::stack`.

---

## 🎯 The Takeaway
This module deepens your understanding of **templated containers, iterators, and algorithms**. By now, you should be comfortable with:
✅ **Searching containers using iterators.**
✅ **Computing spans efficiently using sorting and algorithms.**
✅ **Extending STL containers to make them iterable.**

If you completed this module, **congratulations!** 🎉 You've unlocked **advanced STL container manipulation**. Now, let’s keep pushing forward! 🚀

