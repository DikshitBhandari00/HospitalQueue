# HospitalQueue

## Project Overview
This project simulates a hospital emergency room priority system using C++. It utilizes a Max-Heap to manage a priority queue of patients based on their priority levels.

## Features
- Add patients with their name, age, and priority (1-5).
- Serve patients based on their priority (higher priority served first).
- Display the list of patients in a formatted table.
- Visualize the heap structure as a tree.

## File Structure
- `Patient.h`: Defines the `Patient` struct.
- `PriorityQueue.h` and `PriorityQueue.cpp`: Implements the `EmergencyRoom` class using a Max-Heap.
- `UIHandler.h` and `UIHandler.cpp`: Handles user interface functions.
- `main.cpp`: Contains the menu-driven program.

## How to Run
1. Compile the project using the following command:
   ```bash
   g++ -o HospitalQueue main.cpp PriorityQueue.cpp UIHandler.cpp
   ```
2. Run the compiled program:
   ```bash
   ./HospitalQueue
   ```

## Usage
1. Select an option from the menu:
   - Add a patient.
   - Serve the highest-priority patient.
   - Display the list of patients.
   - Visualize the heap structure.
   - Exit the program.
2. Follow the prompts to interact with the system.

## Time Complexity
- **Insertion**: $O(\log n)$
- **Deletion**: $O(\log n)$

## Example
```
==============================
  Hospital Emergency Room
==============================

Menu:
1. Add Patient
2. Serve Patient
3. Display Patients
4. Display Heap Tree
5. Exit
Enter your choice: 
```
