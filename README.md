# 🚗 Smart Car Parking Simulation (C++ Console Project)

This project simulates a **Smart Car Parking System** using standard C++ on the console. It mimics entry and exit of vehicles, gate control, and parking space tracking using simple menu-driven user interaction.

---

## 📌 Features

- Simulates vehicle **entry and exit** using console input.
- Tracks **available parking spaces** in real-time.
- Displays gate operations and parking status like an LCD.
- Simple menu-based interface for interaction.
- Implements basic logic of embedded parking systems in C++.

---

## 🧰 Requirements

- C++ Compiler (e.g. `g++`, `clang`, MSVC)
- C++11 or later (uses `<thread>` and `<chrono>`)

---

## 🛠️ How to Run

### 💻 On Linux / macOS / Windows (with g++)

1. **Save the code** in a file called `parking_simulation.cpp`
2. **Compile the program:**
   ```bash
   g++ parking_simulation.cpp -o parking
3. **Run the program**:
   ./parking
🕹️ **Usage Instructions**
When the program runs, it will display a menu:
=== SMART CAR PARKING SIMULATION ===
---------------------------
Total Parking Spaces: 4
Available Spaces:     4
---------------------------

Choose an action:
1. Car Entry
2. Car Exit
3. Show Status
0. Exit Program

**Press 1 to simulate a car entering the parking lot.
Press 2 to simulate a car exiting.
Press 3 to show the current parking status.
Press 0 to quit the simulation.**

📂 **Project Structure**
parking_simulation.cpp   // Main C++ source file
README.md                // Project description and instructions

🎓 **Educational Value**
This project is a console-based simulation of a real-world embedded system (like Arduino + sensors + LCD) and is useful for:
Understanding embedded logic in C++
Simulating parking management without hardware
Practicing console interaction, conditionals, and threading

🧠 **Future Enhancements**
Add file logging for entry/exit history.
Introduce random or timer-based IR triggers.
Create a GUI version using Qt or SFML.
Extend for multiple floors or dynamic slot allocation.

📃 **License**
This project is open-source and free to use for educational or personal purposes.
🙋‍♂️ **Author
Urvesh Thubrikar
Project Type: C++ Console Simulation**


