<svg width="400" height="200" xmlns="http://www.w3.org/2000/svg">
  <rect width="100%" height="100%" fill="black"/>
  
  <text x="50" y="100" font-size="30" font-family="Arial" fill="white" opacity="0" id="text1">shhhhh...</text>
  <text x="50" y="140" font-size="30" font-family="Arial" fill="white" opacity="0" id="text2">SHHHHH...</text>
  <text x="50" y="180" font-size="30" font-family="Arial" fill="red" opacity="0" id="text3">SHHHHH... I THINK THE STUDENTS ARE ASLEEP!</text>

  <style>
    @keyframes fadeIn {
      0% { opacity: 0; }
      100% { opacity: 1; }
    }
    
    #text1 { animation: fadeIn 1s ease-in-out forwards; opacity: 0; }
    #text2 { animation: fadeIn 1s ease-in-out 2s forwards; opacity: 0; }
    #text3 { animation: fadeIn 1s ease-in-out 4s forwards; opacity: 0; }
  </style>

  <script>
    document.addEventListener("DOMContentLoaded", function() {
      setTimeout(() => document.getElementById('text1').setAttribute('opacity', '1'), 500);
      setTimeout(() => document.getElementById('text2').setAttribute('opacity', '1'), 2000);
      setTimeout(() => document.getElementById('text3').setAttribute('opacity', '1'), 4000);
    });
  </script>
</svg>


# C++ Module 00 - The Awakening

Welcome, fellow code whisperer, to **C++ Module 00**, where we take our first fearless steps into the untamed wilds of C++. This module isn’t about "Hello, World!"—it’s about making noise, commanding attention, and managing chaos with an **awesome** (and totally not outdated) phonebook.

## 🚀 Megaphone: Echoing Across the Digital Void (ex00)

### 🔥 The Challenge

Your first task? Make yourself heard. This is the **megaphone program**, a simple yet relentless force of nature that transforms whispers into **thunderous roars**. Forget lowercase. Forget subtlety. If it’s on screen, it’s **YELLING**.

### 📜 The Rules

- Your program **takes in a string** and outputs it in **ALL CAPS**.
- If **no arguments** are provided, it unleashes an **ear-piercing feedback noise** (metaphorically speaking, of course).
- Forbidden functions? **None.** That means you have the full arsenal of C++ at your disposal. No excuses.

### 🛠 Implementation Highlights

- **Command-line arguments**: Process input directly from the command line.
- **Character manipulation**: Convert each character to uppercase.
- **Edge cases**: Handle empty input like a true C++ warrior.

#### ⚡ Sample Output

```bash
$> ./megaphone "shhhhh... I think the students are asleep..."
SHHHHH... I THINK THE STUDENTS ARE ASLEEP...

$> ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

$> ./megaphone
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

### 🎬 Megaphone Animation

```md
<img src="megaphone_animation.svg" />
```

## 📞 My Awesome PhoneBook: A Digital Relic (ex01)

### 🧐 The Problem

We’re taking a time machine back to the **80s**, where digital storage was a luxury, and memory management wasn’t just a problem—it was a **lifestyle**. Behold, the **My Awesome PhoneBook**, an old-school, memory-efficient contact manager that **refuses to believe in dynamic allocation**.

### 🔹 The Specs

- **Two classes**: `PhoneBook` and `Contact`.
- **Maximum storage**: **8 contacts** (because memory isn’t free, pal).
- **FIFO replacement**: The oldest contact gets kicked out when a new one arrives.
- **Three commands**:
  - `ADD`: Store a contact.
  - `SEARCH`: Retrieve and display contacts in an **aesthetically pleasing** table format.
  - `EXIT`: Walk away from your digital Rolodex forever.

### 💾 Storage Constraints

- Dynamic memory allocation? **Forbidden.**
- Contacts must be stored in a **fixed-size array**.
- Every `Contact` must hold:
  - **First Name**
  - **Last Name**
  - **Nickname**
  - **Phone Number**
  - **Darkest Secret** (Yes, it’s mandatory. No, you may not skip it.)

### 🔎 Search Functionality

- Display contacts in a **formatted table** (10-character wide columns, right-aligned, truncating overflow text with a dot `.`).
- Prompt for an **index** to reveal the full details of a contact.
- Handle out-of-range indexes gracefully.

#### ⚡ Sample Output

```bash
$> ./phonebook
📞 Welcome to My Awesome PhoneBook
Enter a command: ADD
First Name: John
Last Name: Doe
Nickname: JD
Phone Number: 555-1234
Darkest Secret: Likes pineapple pizza

$> ./phonebook
Enter a command: SEARCH
---------------------------------------------
| Index | First Name | Last Name  | Nickname  |
---------------------------------------------
| 1     | John      | Doe       | JD        |
---------------------------------------------
Enter the index of the contact: 1
First Name: John
Last Name: Doe
Nickname: JD
Phone Number: 555-1234
Darkest Secret: Likes pineapple pizza
```

### 🛠 Implementation Highlights

- **Class encapsulation**: Keep the `Contact` details private and let `PhoneBook` do the heavy lifting.
- **Array management**: No fancy vectors here—just good old-fashioned static arrays.
- **Input handling**: Reject invalid input, keep things clean.

---

## 🌟 The Takeaway

This module **isn't** just an introduction. It’s a **baptism by fire**, an initiation into the art of **thinking in C++**. Here, we embrace **the raw power of the language**—no hand-holding, no shortcuts, just **pure, unfiltered problem-solving**.

So go forth, code warrior, and **MAKE SOME NOISE.** 🔥
