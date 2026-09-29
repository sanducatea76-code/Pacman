# Pacman Console Game

A console-based implementation of the classic **Pacman** game written in C++ for Windows. Developed for **Laboratory Assignment 01 (Lab 01)**.

---

## 📖 Description

This project recreates the core mechanics of the retro arcade game Pacman inside the Windows command console. Built using Object-Oriented Programming (OOP) principles, the game features continuous state updating, realtime keyboard input handling, optimized console rendering, and an automated enemy ghost powered by distance-tracking pursuit logic.

---

## 🎮 Gameplay & Symbols

The game takes place inside a grid-based maze:

* **`C` (Pacman)**: The player character controlled via keyboard.
* **`G` (Ghost)**: The enemy character that autonomously chases Pacman.
* **`.` (Dots)**: Collectible items scattered across the maze.
* **`#` (Walls)**: Impassable barriers that block movement.

---

## 🏆 Game Rules & Conditions

### 🟢 Win Condition (Victory)
* You win the game by navigating through the maze and collecting **all** remaining dots (`.`).
* Once the final dot is eaten, the game state updates to `VICTORY` and displays the final score.

### 🔴 Lose Condition (Game Over)
* You lose the game if the Ghost (`G`) touches Pacman (`C`).
* Upon collision, the game state updates to `GAME_OVER` and stops the execution loop.

---

## 🕹️ Controls

| Key   | Action      |
| :---: | :---------- |
| **W** | Move Up     |
| **S** | Move Down   |
| **A** | Move Left   |
| **D** | Move Right  |

---

## 💻 Tech Stack & Features

* **Language**: C++ (MSVC / Windows API)
* **Input Handling**: Non-blocking input detection using `_kbhit()` and `_getch()` from `<conio.h>`.
* **Rendering**: Low-flicker screen rendering utilizing `SetConsoleCursorPosition`.
* **AI Logic**: Euclidean distance tracking for target acquisition and wall collision detection.
