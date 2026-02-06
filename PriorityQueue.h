#ifndef PRIORITY_QUEUE_H
#define PRIORITY_QUEUE_H

#include <vector>
#include "Patient.h"

// Class to manage the Emergency Room using a Max-Heap
class EmergencyRoom {
private:
    std::vector<Patient>heap ; // Vector to store the heap

    // Helper functions for heap operations
    void heapifyUp(int index);   // Maintain heap property after insertion
    void heapifyDown(int index); // Maintain heap property after removal

public:
    // Insert a new patient into the heap
    void pushPatient(const Patient& patient);

    // Remove and return the patient with the highest priority
    Patient popTopPatient();

    // Check if the heap is empty
    bool isEmpty() const;

    // Get the current size of the heap
    int getHeapSize() const;

    // Display the heap as a tree structure
    void displayVisualHeap() const;

    // Return the heap vector (for display purposes)
    const std::vector<Patient>& getHeap() const {
        return heap;
    }
};

#endif // PRIORITY_QUEUE_H