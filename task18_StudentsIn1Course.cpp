#include "allStruct.h"

void printStudentsInCourse(Course* course) {
    Student* pStud = course->Studs;
    int i=1;
    cout << "List of students in course " << course->courseName << " - Class " << course->className << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(5) << left << "No"
        << "| " << setw(12) << left << "Student ID"
        << "| " << setw(40) << left << "Full name"
        << "| " << setw(10) << left << "Gender"
        << "| " << setw(10) << left << "Date of birth"
        << "| " << setw(12) << left << "Social ID" << " |" << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    while (pStud != nullptr) {
        cout << "| " << setw(5) << left << i++
            << "| " << setw(12) << left << pStud->studentID
            << "| " << setw(40) << left << pStud->fullname
            << "| " << setw(10) << left << pStud->gender
            << "| " << setw(2) << left << pStud->dateOfBirth.day << "/" << setw(2) << left << pStud->dateOfBirth.month << "/" << pStud->dateOfBirth.year<<"   "
            << "| " << setw(12) << left << pStud->socialID << " |" << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
        pStud = pStud->pNext;
    }
}

