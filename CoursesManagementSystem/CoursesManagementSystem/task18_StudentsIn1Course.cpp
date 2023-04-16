#include "allStruct.h"

void printStudentsInCourse(string courseName, string courseID, SchoolYear* pHeadYear, int school_year, int semester_num)
{
    // Find the school year node with the specified starting year
    SchoolYear* pYear = pHeadYear;
    while (pYear != nullptr && pYear->startYear != school_year)
    {
        pYear = pYear->pNext;
    }

    // If the specified school year is not found, exit the function
    if (pYear == nullptr)
    {
        cout << "School year " << school_year << "-" << school_year + 1 << " not found." << endl;
        return;
    }

    // Find the semester node with the specified semester number
    Semester* pSemester = pYear->semesters;
    while (pSemester != nullptr && pSemester->semester_num != semester_num)
    {
        pSemester = pSemester->p_Next_Semester;
    }

    // If the specified semester is not found, exit the function
    if (pSemester == nullptr)
    {
        cout << "Semester " << semester_num << " not found in school year " << school_year << "-" << school_year + 1 << "." << endl;
        return;
    }

    // Find the course node with the specified course name and course ID
    Course* pCourse = pSemester->p_CourseList;
    while (pCourse != nullptr && (pCourse->courseName != courseName || pCourse->courseID != courseID))
    {
        pCourse = pCourse->pNext;
    }
    // Print the list of students in the course
    cout << "List of students in " << courseName << " with courseID " << courseID << " - Semester " << semester_num << " of school year " << school_year << "-" << school_year + 1 << ":" << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(5) << left << "No"
        << "| " << setw(12) << left << "Student ID"
        << "| " << setw(40) << left << "Full name"
        << "| " << setw(10) << left << "Gender"
        << "| " << setw(10) << left << "Date of birth"
        << "| " << setw(12) << left << "Social ID" << " |" << endl;
    cout << "----------------------------------------------------------------------------------------------------------" << endl;
    int i=1;
    Student* pStudent = pCourse->Studs;
    while (pStudent != nullptr)
    {
        cout << "| " << setw(5) << left << i++
            << "| " << setw(12) << left << pStudent->studentID
            << "| " << setw(40) << left << pStudent->fullname
            << "| " << setw(10) << left << pStudent->gender
            << "| " << setw(2) << left << pStudent->dateOfBirth.day << "/" << setw(2) << left << pStudent->dateOfBirth.month << "/" << pStudent->dateOfBirth.year<<"   "
            << "| " << setw(12) << left << pStudent->socialID << " |" << endl;
        cout << "----------------------------------------------------------------------------------------------------------" << endl;
        pStudent = pStudent->pNext;
    }
}

