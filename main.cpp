#include <iostream>
#include <string>
#include "PriorityQueue.h"
#include "UIHandler.h"

void displayMenu() {
    std::cout << "\nMenu:\n";
    std::cout << "1. Add Patient\n";
    std::cout << "2. Serve Patient\n";
    std::cout << "3. Display Patients\n";
    std::cout << "4. Display Heap Tree\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice: ";
}

int main() {
    EmergencyRoom er
    int choice;

    while (true) {
        system("cls"); // Clear the console
        UIHandler::printHeader();
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 1: {
                std::string name;
                int age, priority;
                std::cout << "Enter Patient Name: ";
                std::cin.ignore();
                std::getline(std::cin, name);
                std::cout << "Enter Patient Age: ";
                std::cin >> age;
                std::cout << "Enter Patient Priority (1-5): ";
                std::cin >> priority;
                er.pushPatient(Patient(name, age, priority));
                std::cout << "Patient added successfully!\n";
                system("pause");
                break;
            }
            case 2: {
                try {
                    Patient served = er.popTopPatient();
                    std::cout << "Serving Patient: " << served.name << "\n";
                } catch (const std::exception& e) {
                    std::cout << e.what() << "\n";
                }
                system("pause");
                break;
            }
            case 3: {
                std::vector<Patient> patients = er.getHeap(); // Assuming getHeap() returns the heap vector
                UIHandler::displayPatientTable(patients);
                system("pause");
                break;
            }
            case 4: {
                er.displayVisualHeap();
                system("pause");
                break;
            }
            case 5:
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid choice. Try again.\n";
                system("pause");
        }
    }
}