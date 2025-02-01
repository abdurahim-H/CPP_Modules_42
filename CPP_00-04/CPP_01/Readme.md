![C++](https://img.shields.io/badge/C++-98-blue?logo=cplusplus) ![License](https://img.shields.io/badge/License-Free-red) ![Zombies](https://img.shields.io/badge/Zombies-Approved-green) 

# C++ Module 01 - The Dance of Memory and Chaos

Welcome to **C++ Module 01**, where memory is a battlefield, pointers wield power, and Harl just won’t shut up. This module is a **deep dive into memory management, references, and object-oriented organization**, all wrapped in chaos and humor. Get ready to **face the undead, wield weapons, replace words like a true hacker, and endure the rants of Harl**.

---

## 🧟 BraiiiiiiinnnzzzZ (ex00)

### 🧠 The Challenge
The dead rise, and they need a proper **C++ class** to organize their mindless cravings. You’ll create a **Zombie** class with a `name` and an **announce()** method that lets them express their undying hunger.

### 💀 Key Features
- Create zombies **on both the stack and the heap**.
- Implement `newZombie(std::string name)` for heap allocation.
- Implement `randomChump(std::string name)` for stack allocation.
- **Destructor Debugging**: Ensure zombies announce their **final demise** when they are destroyed.

#### ⚡ Sample Output
```bash
$> ./zombie_creator
Foo: BraiiiiiiinnnzzzZ...
Bar: BraiiiiiiinnnzzzZ...
Deleting Foo
Deleting Bar
```

### 🔥 The Takeaway
Understand **when to use heap vs stack allocation**—and most importantly, **always clean up your mess**.

---

## 🧟‍♂️ Moar Brainz! (ex01)

### 🏴‍☠️ The Challenge
Summon an **entire horde of zombies** using a single memory allocation. Efficiency matters.

### 🧩 Key Features
- Implement `Zombie* zombieHorde(int N, std::string name);`
- Store all zombies in a **single allocated memory block**.
- Each zombie announces its presence.
- **Properly delete** the horde to prevent memory leaks.

### 🛠 Memory Considerations
- **Stack allocation won’t cut it here.** This is a job for **heap memory**.
- A horde should not require multiple `new` calls.
- **Avoid memory leaks at all costs!**

---

## 🔗 HI THIS IS BRAIN (ex02)

### 🎯 The Challenge
Time to **demystify references and pointers**. You'll create a simple program to visualize how references work compared to pointers.

### 📌 Key Features
- Define a **string** initialized to `"HI THIS IS BRAIN"`.
- Create:
  - A **pointer** (`stringPTR`) to hold its address.
  - A **reference** (`stringREF`) to refer to it.
- Print **memory addresses** and **values** stored in them.

#### 🧐 Expected Output
```bash
String memory address: 0x1234abcd
Pointer holds address: 0x1234abcd
Reference holds address: 0x1234abcd
String value: HI THIS IS BRAIN
Pointer value: HI THIS IS BRAIN
Reference value: HI THIS IS BRAIN
```

### 🏆 Lesson Learned
- **References** are immutable once assigned.
- **Pointers** can change what they point to.
- Both can be used to access and manipulate memory efficiently.

---

## ⚔️ Unnecessary Violence (ex03)

### 🛡️ The Challenge
Build a **Weapon** class and arm your humans! You’ll manage ownership between **references and pointers**.

### 🔥 Key Features
- `Weapon` class with:
  - Private `type` attribute.
  - `getType()` returning a **const reference**.
  - `setType()` for modifications.
- `HumanA` always has a weapon (uses a **reference**).
- `HumanB` may or may not have a weapon (uses a **pointer**).
- Implement `attack()` to display:
  ```
  Bob attacks with their crude spiked club
  ```

### 🤔 Key Insight
- Use **references** when ownership is guaranteed.
- Use **pointers** when the weapon might be absent or change dynamically.

---

## ✂️ Sed is for Losers (ex04)

### 📝 The Challenge
Write your own version of `sed`. Given a **filename** and two strings (`s1` and `s2`), replace **every** occurrence of `s1` with `s2` in the file.

### 🔑 Key Features
- Open and read the file.
- Copy its content into `<filename>.replace`.
- Replace **all** instances of `s1` with `s2`.
- **Forbidden Function:** `std::string::replace`. So, **think outside the box!**

### 💡 Things to Consider
- Handle **errors gracefully** (missing file, permissions, etc.).
- **Efficiency matters** when replacing large text.

---

## 😡 Harl 2.0 (ex05)

### 🎤 The Challenge
Harl, the **worst customer ever**, has complaints—**lots of them**. Automate his rants using **pointers to member functions** instead of a mess of `if/else`.

### 🔥 Key Features
- **Four complaint levels:**
  - `DEBUG`: Extra bacon rants.
  - `INFO`: Price complaints.
  - `WARNING`: "I deserve free stuff."
  - `ERROR`: "Manager NOW!"
- Implement a `complain(std::string level)` function.
- No long `if/else if/else` chains—**use function pointers**.

### 🎭 Example Usage
```bash
$> ./harl DEBUG
[DEBUG] I love having extra bacon for my burger!
$> ./harl ERROR
[ERROR] This is unacceptable! I want to speak to the manager now!
```

### 🏆 Key Takeaways
- Use **pointers to member functions** for dynamic behavior.
- Replace bloated conditionals with **cleaner, more maintainable code**.
- Learn how to organize code **like a pro**.

---

## 🎯 The Takeaway
This module is all about **understanding memory management, pointers, and references**—the **core** of C++. You’ve tackled:
✅ **Heap vs Stack allocation**
✅ **Pointers vs References**
✅ **Efficient string manipulation**
✅ **Function pointers for cleaner code**

If you survived this, **congratulations!** 🎉 You’re now **one step closer to mastering C++ memory management.** Keep going—**the real challenges are yet to come.** 🚀

