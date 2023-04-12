#include"allStruct.h"

void DisplayStudentInClass(Class* classroom, string className)
{
    int i=0;
    while (classroom != nullptr)
    {
        if (classroom->name == className)
        {
            Student* currentStudent = classroom->student;
            int studentCount = 0;

            cout << "List of students in " << className << ":\n";
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            cout << "| " << setw(5) << left << "No"
            << "| " << setw(12) << left << "Student ID"
            << "| " << setw(40) << left << "Full name"
            << "| " << setw(10) << left << "Gender"
            << "| " << setw(10) << left << "Date of birth"
            << "| " << setw(12) << left << "Social ID" << " |" << endl;
            cout << "----------------------------------------------------------------------------------------------------------" << endl;
            while (currentStudent != nullptr)
            {
                ++studentCount;

                cout << "| " << setw(5) << left << ++i
                << "| " << setw(12) << left << currentStudent->studentID
                << "| " << setw(40) << left << currentStudent->fullname
                << "| " << setw(10) << left << currentStudent->gender
                << "| " << setw(2) << left << currentStudent->dateOfBirth.day << "/" << setw(2) << left << currentStudent->dateOfBirth.month << "/" << currentStudent->dateOfBirth.year<<"   "
                << "| " << setw(12) << left << currentStudent->socialID << " |" << endl;
                cout << "----------------------------------------------------------------------------------------------------------" << endl;

                currentStudent = currentStudent->pNext;
            }

            return;
        }

        classroom = classroom->pNext;
    }

    cout << "Class " << className << " not found." << endl;
}
