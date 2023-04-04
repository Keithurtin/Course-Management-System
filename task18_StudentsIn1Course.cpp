#include "allStruct.h"

void printStudentsInCourse(string courseName, string className, Semester* semester, int school_year, int semester_num) {
    if (semester == nullptr) {
        cout << "No data!" << endl;
        return;
    }

    while (semester != nullptr) {
        if (semester->school_year.year == school_year && semester->semester_num == semester_num) {
            Course* p_CourseList = semester->p_CourseList;
            while (p_CourseList != nullptr) {
                if (p_CourseList->courseName == courseName && p_CourseList->className == className) {
                    Student* pStud = p_CourseList->Studs;
                    int i = 1;
                    cout << "List of students in course " << p_CourseList->courseName << " - Class " << p_CourseList->className << " in Semester " << semester->semester_num << "/"
                    << semester->school_year.year << "-" << semester->school_year.year+1 << endl;
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
                return;
            }
            p_CourseList = p_CourseList->pNext;
        }
    }
    semester = semester->p_Next_Semester;
}
    cout << "No data!" << endl;
}

