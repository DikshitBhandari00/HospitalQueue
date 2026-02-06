#ifndef UI_HANDLER_H
#define UI_HANDLER_H

#include <vector>
#include "Patient.h"

// Functions for handling the UI
namespace UIHandler {

    // Print the header for the application
    void printHeader();

    // Display a formatted table of patients
    void displayPatientTable(const std::vector<Patient>& patients);

    // Display a visual tree view of the heap
    void displayTreeView(const std::vector<Patient>& heap);

}

#endif // UI_HANDLER_H