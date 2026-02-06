#include "UIHandler.h"
#include <iostream>
#include <iomanip>

namespace UIHandler {

    // Print the header for the application
    void printHeader() {
        std::cout << "==============================\n";
        std::cout << "  Hospital Emergency Room\n";
        std::cout << "==============================\n";
    }

    // Display a formatted table of patients
    void displayPatientTable(const std::vector<Patient>& patients) {
        std::cout << std::left << std::setw(20) << "Name"
                  << std::setw(10) << "Age"
                  << std::setw(10) << "Priority" << std::endl;
        std::cout << "------------------------------------------\n";
        for (const auto& patient : patients) {
            std::cout << std::left << std::setw(20) << patient.name
                      << std::setw(10) << patient.age
                      << std::setw(10) << patient.priority << std::endl;
        }
    }

    // Display a visual tree view of the heap
    void displayTreeView(const std::vector<Patient>& heap) {
        int level = 0;
        int itemsInLevel = 1;
        int count = 0;

        for (size_t i = 0; i < heap.size(); ++i) {
            if (count == 0) {
                std::cout << "Level " << level << ": ";
            }

            std::cout << "(" << heap[i].name << ", " << heap[i].priority << ") ";
            count++;

            if (count == itemsInLevel) {
                std::cout << std::endl;
                level++;
                itemsInLevel *= 2;
                count = 0;
            }
        }
        if (count != 0) {
            std::cout << std::endl;
        }
    }

}