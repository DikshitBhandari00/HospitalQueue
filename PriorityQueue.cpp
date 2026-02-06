#include "PriorityQueue.h"
#include <iostream>
#include <iomanip>

// Helper function to maintain heap property after insertion
void EmergencyRoom::heapifyUp(int index) {
    while (index > 0) {
        int parentIndex = (index - 1) / 2;
        if (heap[index].priority > heap[parentIndex].priority) {
            std::swap(heap[index], heap[parentIndex]);
            index = parentIndex;
        } else {
            break;
        }
    }
}

// Helper function to maintain heap property after removal
void EmergencyRoom::heapifyDown(int index) {
    int size = heap.size();
    while (true) {
        int leftChild = 2 * index + 1;
        int rightChild = 2 * index + 2;
        int largest = index;

        if (leftChild < size && heap[leftChild].priority > heap[largest].priority) {
            largest = leftChild;
        }
        if (rightChild < size && heap[rightChild].priority > heap[largest].priority) {
            largest = rightChild;
        }
        if (largest != index) {
            std::swap(heap[index], heap[largest]);
            index = largest;
        } else {
            break;
        }
    }
}

// Insert a new patient into the heap
void EmergencyRoom::pushPatient(const Patient& patient) {
    heap.push_back(patient);
    heapifyUp(heap.size() - 1);
}

// Remove and return the patient with the highest priority
Patient EmergencyRoom::popTopPatient() {
    if (isEmpty()) {
        throw std::runtime_error("Heap is empty");
    }
    Patient topPatient = heap[0];
    heap[0] = heap.back();
    heap.pop_back();
    heapifyDown(0);
    return topPatient;
}

// Check if the heap is empty
bool EmergencyRoom::isEmpty() const {
    return heap.empty();
}

// Get the current size of the heap
int EmergencyRoom::getHeapSize() const {
    return heap.size();
}

// Display the heap as a tree structure
void EmergencyRoom::displayVisualHeap() const {
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