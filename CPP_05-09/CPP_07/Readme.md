![C++](https://img.shields.io/badge/C++-98-blue?logo=cplusplus) ![License](https://img.shields.io/badge/License-Free-red) ![Templates](https://img.shields.io/badge/Templates-Approved-green) 


# C++ Module 07 - Mastering Templates

Welcome to **C++ Module 07**, where we delve into **function and class templates**! This module focuses on **generic programming**, ensuring that you can write flexible and reusable code. From **basic template functions** to **iterating over arrays** and finally implementing a **custom templated array class**, you're about to level up your **C++ templating skills**! 🚀

---

## 🔁 Start with a Few Functions (ex00)

### 🔄 The Challenge
Implement three fundamental **function templates** that work with **any type**:
1. **swap(T &a, T &b)** → Swaps two values.
2. **min(T const &a, T const &b)** → Returns the smaller value.
3. **max(T const &a, T const &b)** → Returns the larger value.

These functions must work **with any data type that supports comparison operators**.

### 🔹 Key Features
- **Defined as templates** in a header file.
- **Works with all comparable types** (e.g., `int`, `float`, `std::string`).
- **Handles cases where values are equal** (returns the second one).

#### ⚡ Sample Output
```bash
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
```

### 🏆 The Takeaway
- **Template functions** allow for generic programming.
- **Flexibility**: Code works with multiple data types.
- **Avoiding redundancy** by writing reusable functions.

---

## 🔄 Iter (ex01)

### 🔍 The Challenge
Implement a **function template `iter`** that applies a function to **each element of an array**.

### 🔹 Key Features
- **Parameters:**
  - **Pointer to an array** (of any type `T`).
  - **Number of elements in the array**.
  - **Function to apply to each element**.
- **Works with any data type**.
- **Function parameter can be a template function**.

#### ⚡ Sample Usage
```cpp
void printInt(int &n) { std::cout << n << " "; }

int arr[] = {1, 2, 3, 4, 5};
iter(arr, 5, printInt);
```

#### 🏆 The Takeaway
- **Generic Iteration**: Apply operations to an array **without knowing its type**.
- **Function Pointers as Arguments**: Enables high flexibility.
- **Works with custom user-defined functions**.

---

## 🗃️ Array (ex02)

### 🔢 The Challenge
Implement a **templated Array class** that behaves similarly to `std::vector` but without dynamic resizing.

### 🔹 Key Features
- **Constructor Variants:**
  - Default constructor (`Array<T>()`) creates an empty array.
  - Constructor with `size` (`Array<T>(unsigned int n)`) initializes an array of size `n`.
  - **Copy Constructor & Assignment Operator**:
    - **Deep copy**: Changing one array should not affect copies.
- **Overloaded Operators:**
  - `operator[]` → Allows element access.
  - **Throws `std::exception`** if accessing an out-of-bounds index.
- **`size()` Method:**
  - Returns the number of elements in the array.

#### ⚡ Sample Usage
```cpp
Array<int> numbers(5);
for (unsigned int i = 0; i < numbers.size(); i++)
    numbers[i] = i * 10;

std::cout << numbers[2] << std::endl; // Prints 20
```

#### 🏆 The Takeaway
- **Custom templated containers** enhance flexibility.
- **Safe memory management** with proper copy behavior.
- **Encapsulation & Operator Overloading** improve usability.

---

## 🎯 The Takeaway
This module introduces the **power of templates**, allowing you to write reusable, type-agnostic code. By now, you should be comfortable with:
✅ **Function templates for generic operations.**
✅ **Applying functions to arrays using template iteration.**
✅ **Creating a template-based array class with proper memory handling.**

If you completed this module, **congratulations!** 🎉 You now have **a strong grasp of C++ templates**, a crucial skill for modern C++ development. Onward to the next challenge! 🚀

