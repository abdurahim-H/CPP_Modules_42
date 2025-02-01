![C++](https://img.shields.io/badge/C++-98-blue?logo=cplusplus) ![License](https://img.shields.io/badge/License-Free-red) ![Zombies](https://img.shields.io/badge/Zombies-Approved-green)

# C++ Module 03 - The Inheritance Hierarchy of ClapTraps

Welcome to **C++ Module 03**, where **inheritance** takes center stage! In this module, you'll craft a hierarchy of **robotic warriors**—starting with the humble **ClapTrap**, evolving into the **ScavTrap**, and culminating in the formidable **FragTrap**. Get ready to explore **object-oriented programming (OOP), class inheritance, and polymorphism** in action! 🤖🔥

---

## 🤖 Aaaaand... OPEN! (ex00)

### ⚔️ The Challenge
The battlefield demands warriors, and **ClapTrap** is the first in line! Your task is to implement this **base class**, defining its fundamental attributes and behaviors.

### 🔹 Key Features
- **Attributes:**
  - `Name` (passed as a constructor parameter)
  - `Hit points = 10`
  - `Energy points = 10`
  - `Attack damage = 0`
- **Public Methods:**
  - `attack(const std::string& target);` → Reduces target’s hit points.
  - `takeDamage(unsigned int amount);` → Reduces own hit points.
  - `beRepaired(unsigned int amount);` → Restores hit points (costs energy).
- **Constraints:**
  - Cannot act if hit points or energy points are depleted.
  - Constructors and destructor must **display messages** to track creation/destruction.

#### ⚡ Sample Output
```bash
ClapTrap A attacks B, causing 5 points of damage!
ClapTrap A takes 3 damage!
ClapTrap A repairs itself, regaining 2 hit points!
```

### 🏆 The Takeaway
- **Encapsulation**: Keep attributes private.
- **Modular Design**: Separate `.hpp` and `.cpp` files.
- **Class Behavior**: Manage health, energy, and attack mechanics.

---

## 🛡️ Serena, my love! (ex01)

### 🔄 The Challenge
One ClapTrap isn’t enough! Meet **ScavTrap**, a **derived class** that extends **ClapTrap**, inheriting its abilities but with **enhanced stats** and a **unique ability**.

### 🔹 Key Features
- **Inherited Attributes:**
  - `Hit points = 100`
  - `Energy points = 50`
  - `Attack damage = 20`
- **New Method:**
  - `guardGate();` → Activates **Gate Keeper mode**.
- **Proper Constructor/Destructor Chaining:**
  - **Order of Execution:**
    1. **Construct** ClapTrap → then ScavTrap.
    2. **Destruct** ScavTrap → then ClapTrap.

#### ⚡ Sample Output
```bash
ClapTrap Serena constructed!
ScavTrap Serena constructed!
Serena enters Gate Keeper mode!
ScavTrap Serena destroyed!
ClapTrap Serena destroyed!
```

### 🏆 The Takeaway
- **Class Inheritance**: Extend existing functionality.
- **Constructor Chaining**: Understand the order of execution.
- **Code Reusability**: Avoid redundant code using inheritance.

---

## 🎉 Repetitive Work (ex02)

### 🚀 The Challenge
Tired of ClapTraps? Too bad, because **FragTrap** is here! Like ScavTrap, it inherits from ClapTrap but **with even more firepower**.

### 🔹 Key Features
- **Inherited Attributes:**
  - `Hit points = 100`
  - `Energy points = 100`
  - `Attack damage = 30`
- **New Method:**
  - `highFivesGuys();` → Requests a **high five**!
- **Proper Constructor/Destructor Chaining:**
  - Same concept as **ScavTrap**: build in **ascending order**, destroy in **reverse order**.

#### ⚡ Sample Output
```bash
ClapTrap Bob constructed!
FragTrap Bob constructed!
Bob asks for a high five!
FragTrap Bob destroyed!
ClapTrap Bob destroyed!
```

### 🏆 The Takeaway
- **Multiple Derived Classes**: Manage different behaviors while inheriting a common base.
- **Adding Unique Behaviors**: Extend classes **without modifying the base**.
- **Destruction Order Matters**: Base class destructors must be virtual in complex hierarchies.

---

## 🎯 The Takeaway
This module introduces you to **inheritance**, a key pillar of object-oriented programming (OOP). You’ve tackled:
✅ **Base and Derived Classes**
✅ **Constructor/Destructor Chaining**
✅ **Encapsulation and Code Reusability**
✅ **Extending Functionality via Inheritance**

If you made it this far, **congratulations!** 🎉 Your C++ skills are leveling up, and the next challenges await! 🚀

