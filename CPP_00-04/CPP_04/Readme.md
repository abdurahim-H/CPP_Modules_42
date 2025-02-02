![C++](https://img.shields.io/badge/C++-98-blue?logo=cplusplus) ![License](https://img.shields.io/badge/License-Free-red) ![Polymorphism](https://img.shields.io/badge/Polymorphism-Approved-green)  

# C++ Module 04 - The Power of Polymorphism

Welcome to **C++ Module 04**, where we **unleash the power of polymorphism**! This module is a deep dive into **subtype polymorphism, abstract classes, and interfaces**, forming the foundation of **object-oriented programming (OOP)**. Brace yourself as we step into the **animal kingdom**, explore **deep copying**, and finally **make the base class abstract** to prevent nonsensical instantiations. 🐶🐱

---

## 🦴 Polymorphism (ex00)

### 🔄 The Challenge
Your first step into polymorphism! Implement a simple **Animal** base class and create **Dog** and **Cat** classes that inherit from it. The goal is to ensure that objects behave correctly when treated as their base class.

### 🔹 Key Features
- **Animal Base Class**:
  - `std::string type` (protected attribute).
  - `makeSound()` method (virtual function).
- **Derived Classes:**
  - `Dog`: Type is **"Dog"**, and it **barks**.
  - `Cat`: Type is **"Cat"**, and it **meows**.
- **Dynamic Allocation:**
  - Create objects dynamically and invoke `makeSound()`.
  - Ensure correct function calls due to polymorphism.
- **Bonus:** Implement `WrongAnimal` and `WrongCat` to show what happens when polymorphism is **not used correctly**.

#### ⚡ Sample Output
```bash
Dog
Cat
Meow!
Woof!
Unknown Animal Sound
```

### 🏆 The Takeaway
- **Polymorphism**: Base class pointers should call derived class functions.
- **Virtual Functions**: Required for runtime polymorphism.
- **Understanding the `vtable`**: Ensures proper method resolution at runtime.

---

## 🧠 I Don’t Want to Set the World on Fire (ex01)

### 🧠 The Challenge
It’s time to give **animals a brain**! Every `Dog` and `Cat` must have a **Brain** class, which stores **100 ideas** (strings). This exercise introduces **deep copying** to ensure that **each animal has its own unique brain**.

### 🔹 Key Features
- **Brain Class:**
  - Stores `std::string ideas[100]`.
- **Updated Dog and Cat Classes:**
  - Each has a **Brain pointer** (`Brain* brain`).
  - Allocate a new `Brain` on construction.
  - Delete `Brain` in the destructor.
  - Implement **deep copy** to avoid shallow copies.
- **Memory Management:**
  - Ensure **no memory leaks**.
  - Proper **copy constructors and assignment operators**.

#### ⚡ Sample Output
```bash
Dog's brain created!
Cat's brain created!
Dog's brain copied!
Cat's brain copied!
Dog's brain deleted!
Cat's brain deleted!
```

### 🏆 The Takeaway
- **Deep Copying**: Avoid unintended modifications across instances.
- **Proper Memory Management**: Prevent memory leaks by managing `new`/`delete`.
- **Understanding Dynamic Allocation**: Learn why pointers are required for complex objects.

---

## 🔒 Abstract Class (ex02)

### 🚫 The Challenge
After all this, **instantiating an Animal directly doesn’t make sense**—they’re just a concept! This exercise **prevents the creation of raw Animal objects** by making it an **abstract class**.

### 🔹 Key Features
- **Make Animal Abstract:**
  - Convert `Animal` into a **pure virtual class**.
  - Prevent instantiation using `virtual void makeSound() = 0;`.
- **Polymorphism Still Works:**
  - Dogs and Cats still inherit from `Animal`.
  - Ensure that objects behave the same as before.
- **Optional:** Rename `Animal` to `AAnimal` for clarity.

#### ⚡ Sample Output
```bash
error: cannot declare variable ‘meta’ to be of abstract type ‘Animal’
```

### 🏆 The Takeaway
- **Abstract Classes**: Prevent instantiation of incomplete objects.
- **Pure Virtual Functions**: Enforce implementation in derived classes.
- **Better Design**: Only meaningful classes should be instantiated.

---

## 🎯 The Takeaway
This module brings **polymorphism, deep copying, and abstraction** to life. By now, you should be confident in:
✅ **Using base class pointers for derived class objects.**
✅ **Implementing deep copies to prevent shared memory issues.**
✅ **Creating abstract classes for cleaner OOP design.**

If you made it this far, **congratulations!** 🎉 You’ve mastered some of the most powerful features of C++ OOP. Now, let’s keep pushing forward! 🚀
