![C++](https://img.shields.io/badge/C++-98-blue?logo=cplusplus) ![License](https://img.shields.io/badge/License-Free-red) ![Zombies](https://img.shields.io/badge/Zombies-Approved-green)

# C++ Module 05 - Bureaucracy and Exceptions

Welcome to **C++ Module 05**, where **bureaucracy meets exception handling**! In this module, we explore **class hierarchies, exception handling, and dynamic object creation**. Get ready to dive into the **world of bureaucrats, forms, and even an intern who does all the work for you**! 🏛️✍️

---

## 🏢 Mommy, when I grow up, I want to be a bureaucrat! (ex00)

### 🔄 The Challenge
The bureaucratic machine begins with the **Bureaucrat** class. Bureaucrats have **a name and a grade** (1 being the highest, 150 the lowest). Attempting to create a bureaucrat with an invalid grade should **throw an exception**.

### 🔹 Key Features
- **Attributes:**
  - `const std::string name` (cannot be modified after creation).
  - `int grade` (must be within **1 to 150**).
- **Public Methods:**
  - `getName()` and `getGrade()`.
  - `incrementGrade()` and `decrementGrade()`.
  - Throws `GradeTooHighException` or `GradeTooLowException` for invalid grades.
- **Operator Overloading:**
  - Overload `<<` for output (`<name>, bureaucrat grade <grade>`).
- **Exception Handling:**
  - `try/catch` blocks for handling bureaucratic nightmares.

#### ⚡ Sample Output
```bash
John, bureaucrat grade 3
Exception: GradeTooHighException
```  

### 🏆 The Takeaway
- **Encapsulation**: Protect member variables.
- **Exception Handling**: Use custom exceptions for logic enforcement.
- **Operator Overloading**: Improve output readability.

---

## 📑 Form up, maggots! (ex01)

### 📜 The Challenge
Bureaucrats need **forms** to process! Introducing the **Form** class, which has **signing and execution grades**. If a bureaucrat’s grade is too low, they **cannot sign it**.

### 🔹 Key Features
- **Attributes:**
  - `const std::string name`
  - `bool isSigned`
  - `const int signGrade` (required to sign)
  - `const int execGrade` (required to execute)
- **Public Methods:**
  - `beSigned(Bureaucrat &b)`: Signs the form if `b` has a high enough grade.
  - Throws `GradeTooLowException` if the grade is insufficient.
  - `signForm()`: Bureaucrats attempt to sign forms.
- **Operator Overloading:**
  - Overload `<<` to display the form's status.

#### ⚡ Sample Output
```bash
Alice signs Tax Return Form.
Bob cannot sign Tax Return Form because his grade is too low.
```  

### 🏆 The Takeaway
- **Encapsulation**: Keep grades private and enforce validation.
- **Custom Exceptions**: Prevent invalid sign attempts.
- **Inter-Class Communication**: Bureaucrats interact with forms.

---

## 🌳 No, you need form 28B, not 28C... (ex02)

### 🌲 The Challenge
It’s time for **concrete forms** with **actual effects**! Introducing:
- **ShrubberyCreationForm** 🌿 (Creates ASCII trees).
- **RobotomyRequestForm** 🤖 (50% chance of robotomization success).
- **PresidentialPardonForm** 🎩 (Grants a pardon).

### 🔹 Key Features
- **Base Form Class:**
  - Adds `execute(Bureaucrat const & executor) const` method.
  - Forms must be **signed before execution**.
  - Execution requires a **sufficiently high grade**.
- **Concrete Forms:**
  - `ShrubberyCreationForm`: Generates a file `<target>_shrubbery` with ASCII trees.
  - `RobotomyRequestForm`: 50% chance of successful robotomization.
  - `PresidentialPardonForm`: Announces a pardon for `<target>`.
- **Bureaucrats Can Execute Forms:**
  - Adds `executeForm(Form const & form)`.
  - Checks for signing and grade validity.

#### ⚡ Sample Output
```bash
Alice executes Robotomy Request on Bender.
*drilling noises* Bender has been successfully robotomized!
```  

### 🏆 The Takeaway
- **Abstract Base Classes**: Prevent instantiation of incomplete objects.
- **Method Overriding**: Concrete forms implement unique behaviors.
- **Grade Checking**: Ensure proper execution conditions.

---

## ☕ At least this beats coffee-making (ex03)

### 🏗️ The Challenge
Filling out forms is tedious, so let’s **automate it** with an **Intern** class. Interns don’t have grades, but they **create forms dynamically** based on requests.

### 🔹 Key Features
- **Intern Class:**
  - `makeForm(std::string formName, std::string target)`:
    - Returns a **pointer to a dynamically allocated form**.
    - Prints `Intern creates <form>`.
    - Uses a **lookup table** instead of ugly `if-else` chains.
- **Dynamic Memory Allocation:**
  - Forms are allocated dynamically and must be managed properly.
- **Exception Handling:**
  - If an invalid form is requested, print an error.

#### ⚡ Sample Output
```bash
Intern creates Robotomy Request Form for Bender.
```  

### 🏆 The Takeaway
- **Factory Pattern**: Centralizes object creation.
- **Avoiding If-Else Chains**: Improves maintainability.
- **Dynamic Object Management**: Proper allocation and deallocation.

---

## 🎯 The Takeaway
This module strengthens your C++ fundamentals by introducing:
✅ **Class Hierarchies and Inheritance**
✅ **Custom Exceptions and Error Handling**
✅ **Operator Overloading for Streamlined Output**
✅ **Dynamic Object Creation with Factory Patterns**

If you made it this far, **congratulations!** 🎉 You now understand **bureaucracy and exception handling** better than most bureaucrats themselves. Let’s move forward! 🚀

