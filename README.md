# 🧮 Math Quiz Game (C++)
A highly interactive, console-based **Math Quiz Game** built using **C++**. 
The application generates dynamic, random mathematical operations tailored to custom difficulty configurations chosen by the player. It evaluates user input instantly and generates a comprehensive final performance report.
This project focuses on **structured programming**, state tracking via structs, multi-level logic design, and advanced terminal UI formatting.
---
## 📚 Training Source
This project was developed as part of the training roadmap on:
**Programming Advices Platform** **Instructor:** Dr. Mohammed Abu-Hadhoud  
🔗 [https://programmingadvices.com/](https://programmingadvices.com/)
---
## 🎯 Project Objectives
* **Master** structured programming principles in C++.
* **Implement** complex dynamic game configurations using `enums` and `structs`.
* **Utilize** advanced random number ranges mapped to distinct difficulty levels.
* **Build** an interactive console experience using ANSI escape color sequences.
* **Track** precise data matrices for extensive performance grading.
---
## ✨ Features
* 🔹 **Custom Quiz Size:** Choose anywhere from 1 to 10 questions per quiz session.
* 🔹 **Four Difficulty Tiers:** Select between *Easy*, *Average*, *Hard*, or a chaotic *Mix* level.
* 🔹 **Operation Flexibility:** Support for Addition, Subtraction, Multiplication, Division, or a *Mix Operation* mode.
* 🔹 **Instant Validation:** Round-by-round correction showing the right answer immediately upon mistakes.
* 🔹 **Asynchronous Generation:** Random numbers change seamlessly based on the selected difficulty scale.
* 🔹 **Dynamic UI Colors:** Utilizes ANSI rendering codes (`\033[...]`) for professional visual cues (Green for success, Red for failure).
* 🔹 **Continuous Replay Loop:** Easily restart the system without needing to reload the application binary.
---
## 🧠 Concepts Applied
* **Enumerations (`enum`):** Used to explicitly govern quiz difficulty modes (`enquestion`) and operational pathways (`enoptype`).
* **Nested Structs (`struct`):** Applied `stquestion` to track individual question components and nested them inside `stquizz` arrays to manage the entire match session state.
* **ANSI Terminal Escape Sequences:** Integrated text background and formatting directly inside the standard output streams.
* **Modular Function Architecture:** Complete decoupling of input extraction, logical execution, and presentation layouts.
* **Pseudo-Random Number Routing:** Programmed smart mathematical constraints leveraging bounded `rand()` limits.
---
## 🎮 Game Configurations Matrix

| Difficulty Level | Number Scope Range | Supported Math Symbols |
| :--- | :--- | :--- |
| **Easy Test** | $1$ to $10$ | `+`, `-`, `*`, `/` |
| **Average Test** | $10$ to $20$ | `+`, `-`, `*`, `/` |
| **Hard Test** | $50$ to $100$ | `+`, `-`, `*`, `/` |
| **Mix Test** | Dynamically shifts ranges | Randomized across all operators |

---
## 🕹️ How the Game Works
1. **Setup Phase:** Enter your desired number of questions, preferred difficulty level, and calculation type.
2. **Execution Phase:** The engine generates questions sequentially based on your choices. 
3. **Grading Phase:** Input your answers; the application immediately cross-references entries with the backend math compiler.
4. **Summary Phase:** Upon completion, the console clears and displays a beautifully structured final report showing whether you **PASSED** or **FAILED**.
---
## 🖥️ Example Gameplay Output
```text
  ● question [1/5]..?
   12
       *
   15 
 ________
 = 180
 [Correct Answer! :-)]
