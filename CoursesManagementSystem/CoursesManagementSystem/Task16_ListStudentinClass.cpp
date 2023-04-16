#include "allStruct.h"

// This function displays the list of students in a given class
void DisplayStudentInClass(Class* classroom, string className)
{
    int i = 0;
    // Traverse through the linked list of classes to find the desired class
    while (classroom != nullptr)
    {
        // If the class name matches the desired class name
        if (classroom->name == className)
        {
            // Set a pointer to the linked list of students in the class
            Student* currentStudent = classroom->student;
            int studentCount = 0;

            // Display the header of the table
            cout << "List of students in " << className << ":\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "| " << setw(5) << left << "No"
                << "| " << setw(12) << left << "Student ID"
                << "| " << setw(40) << left << "Full name"
                << "| " << setw(10) << left << "Gender"
                << "| " << setw(10) << left << "Date of birth"
                << "| " << setw(12) << left << "Social ID" << " |" << endl;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;

            // Traverse through the linked list of students in the class and display their information
            while (currentStudent != nullptr)
            {
                ++studentCount;

                // Display each student's information in a table row
                cout << "| " << setw(5) << left << ++i
                    << "| " << setw(12) << left << currentStudent->studentID
                    << "| " << setw(40) << left << currentStudent->fullname
                    << "| " << setw(10) << left << currentStudent->gender
                    << "| " << setw(2) << left << currentStudent->dateOfBirth.day << "/" << setw(2) << left << currentStudent->dateOfBirth.month << "/" << currentStudent->dateOfBirth.year << "   "
                    << "| " << setw(12) << left << currentStudent->socialID << " |" << endl;
                cout << "----------------------------------------------------------------------------------------------------------" << endl;

                currentStudent = currentStudent->pNext;
            }

            return;
        }

        // Move on to the next class in the linked list
        classroom = classroom->pNext;
    }

    // If the desired class is not found, display an error message
    cout << "Class " << className << " not found." << endl;
}
