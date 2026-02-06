#ifndef PATIENT_H
#define PATIENT_H

#include <string>

// Struct to represent a Patient
struct Patient {
    std::string name; // Name of the patient
    int age;          // Age of the patient
    int priority;     // Priority of the patient (1-5)

    // Constructor for convenience
    Patient(const std::string& name, int age, int priority)
        : name(name), age(age), priority(priority) {}
};

#endif // PATIENT_H