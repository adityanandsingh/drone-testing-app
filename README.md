# 🚁 Drone Testing Application

[![C++](https://img.shields.io/badge/Language-C++-blue.svg)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-macOS-lightgrey)]()
[![Status](https://img.shields.io/badge/Project-Saxion%20University%20MICT%20Assignment-brightgreen)]()

A command-line application simulating a drone flying within a **5×5 meter** testing area. This was developed as part of the **Master's intake assignment** for the **ICT: Software Engineering (MICT)** program at **Saxion University of Applied Sciences**.

---

## ✨ Features

- `LAUNCH X,Y,DIRECTION` – Deploy drone to a position facing NORTH/SOUTH/EAST/WEST
- `FLY` – Move one step forward
- `LEFT` / `RIGHT` – Rotate 90° without moving
- `STATUS` – Report current coordinates and direction
- Bounds checking: Drone cannot leave the testing area
- Ignores commands until a valid LAUNCH is executed

---

## 🚀 Getting Started

### ✅ Prerequisites

- [G++](https://gcc.gnu.org/) installed (use `brew install gcc` if needed on macOS)
- Terminal or any C++-capable IDE (e.g. VS Code)

### 🛠 Compile the App

```bash
g++ main.cpp Drone.cpp -o drone_app
```

### RUN the App
```
./drone_app
```
### Sample input
LAUNCH 1,2,EAST
FLY
FLY
LEFT
FLY
STATUS

Output
3,3,NORTH

