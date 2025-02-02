![C++](https://img.shields.io/badge/C++-98-blue?logo=cplusplus) ![License](https://img.shields.io/badge/License-Free-red) ![TypeCasting](https://img.shields.io/badge/TypeCasting-Approved-green)  

# C++ Module 06 - Mastering Type Conversions and Casting

Welcome to **C++ Module 06**, where we dive deep into **C++ type conversions, serialization, and dynamic type identification**. This module challenges your understanding of **C++ casts, memory manipulation, and runtime type resolution**. Brace yourself for **scalar conversions, serialization techniques, and real-type identification without typeid**! 🧑‍💻🔥

---

## 🔢 Conversion of Scalar Types (ex00)

### 🔄 The Challenge
Implement a **ScalarConverter** class that converts a **string representation of a scalar type** into one of the following:
- **char**
- **int**
- **float**
- **double**

The program must **detect the type of the literal** and convert it to all other types, handling **edge cases, special literals, and overflow scenarios**.

### 🔹 Key Features
- **Static Class:**
  - `ScalarConverter::convert(std::string)`
- **Input Types:**
  - Character literals (`'c'`, `'a'`...)
  - Integer literals (`42`, `-42`, `0`...)
  - Floating-point literals (`4.2f`, `-4.2f`, `nanf`, `+inff`...)
  - Double literals (`4.2`, `-4.2`, `nan`, `+inf`...)
- **Edge Case Handling:**
  - Non-displayable characters.
  - Impossible conversions (e.g., `nan` to `int`).
  - Special floating-point values (`nan`, `+inf`, `-inf`).

#### ⚡ Sample Output
```bash
$> ./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0

$> ./convert nan
char: impossible
int: impossible
float: nanf
double: nan
```

### 🏆 The Takeaway
- **Type Detection**: Identify and classify different scalar types.
- **Explicit Casting**: Convert between numeric types safely.
- **Exception Handling**: Handle non-convertible cases gracefully.

---

## 📦 Serialization (ex01)

### 🔄 The Challenge
Implement a **Serializer** class that converts a pointer into an **integer representation** (`uintptr_t`) and back. This allows you to **store, transfer, and reconstruct objects using raw memory addresses**.

### 🔹 Key Features
- **Static Methods:**
  - `uintptr_t serialize(Data* ptr);` → Converts pointer to integer.
  - `Data* deserialize(uintptr_t raw);` → Converts integer back to pointer.
- **Data Structure:**
  - Define a **non-empty struct** `Data` with meaningful members.
- **Pointer Comparison:**
  - Ensure `deserialize(serialize(&data)) == &data`.

#### ⚡ Sample Output
```bash
Original pointer: 0x123456
Serialized value: 305419896
Deserialized pointer: 0x123456
Serialization successful!
```

### 🏆 The Takeaway
- **Raw Memory Manipulation**: Understand how pointers can be represented as integers.
- **Data Persistence**: A foundational step toward advanced serialization techniques.
- **Pointer Integrity**: Ensure serialized/deserialized values remain unchanged.

---

## 🕵️ Identify Real Type (ex02)

### 🔍 The Challenge
Implement a **Base class** with three derived classes (**A, B, C**) and create functions to **identify their actual type at runtime**—without using `typeid`.

### 🔹 Key Features
- **Class Hierarchy:**
  - `class Base { public: virtual ~Base(); }` (Ensures polymorphism).
  - `class A : public Base {}`
  - `class B : public Base {}`
  - `class C : public Base {}`
- **Type Identification Methods:**
  - `Base* generate(void);` → Randomly instantiates A, B, or C.
  - `void identify(Base* p);` → Prints `A`, `B`, or `C`.
  - `void identify(Base& p);` → Identifies type using references.
- **Restrictions:**
  - **No `typeid`** usage.
  - Must determine type **dynamically at runtime**.

#### ⚡ Sample Output
```bash
Generated instance: A
Identified by pointer: A
Identified by reference: A

Generated instance: C
Identified by pointer: C
Identified by reference: C
```

### 🏆 The Takeaway
- **Polymorphism in Practice**: Use base class pointers to interact with derived objects.
- **Dynamic Type Identification**: Determine an object's real type without `typeid`.
- **Random Instantiation**: Generate random objects dynamically at runtime.

---

## 🎯 The Takeaway
This module deepens your understanding of **type conversions, memory serialization, and runtime type resolution**. By now, you should be comfortable with:
✅ **Scalar type conversions and handling special literals.**
✅ **Serialization and deserialization of memory addresses.**
✅ **Dynamic type identification using base class pointers.**

If you completed this module, **congratulations!** 🎉 You're now **one step closer to mastering C++ type manipulation**. Onward to the next challenge! 🚀

