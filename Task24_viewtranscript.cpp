#include"allStruct.h"

void displayTranscript(Student* pHead, string studentID, Semester* pCurrentSemester, int semester, int year)
{
    if (pCurrentSemester == nullptr)
    {
        cout << "No current semester found." << endl;
        return;
    }

    if (pCurrentSemester->school_year.year != year || pCurrentSemester->semester_num != semester)
    {
        cout << "No courses found for semester " << semester << " of school year " << year << "-" << year + 1 << endl;
        return;
    }

    Student* curStudent = pHead;
    while (curStudent != nullptr && curStudent->studentID != studentID) {
        curStudent = curStudent->pNext;
    }

    if (curStudent == nullptr) {
        cout << "Student not found." << endl;
        return;
    }

    cout << "Transcript for student with ID " << studentID << " in semester " << pCurrentSemester->semester_num << " - School year: " << pCurrentSemester->school_year.year << " - " << pCurrentSemester->school_year.year + 1 << ":" << endl;
    cout << "Full Name: " << curStudent->fullname << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(12) << left << "Course ID"
        << "| " << setw(35) << left << "Course Name"
        << "| " << setw(10) << left << "Credits"
        << "| " << setw(8) << left << "Midterm"
        << "| " << setw(6) << left << "Other"
        << "| " << setw(5) << left << "Final"
        << "| " << setw(6) << left << "Total" << " |" << endl;
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;

    Course* curCourse = pCurrentSemester->p_CourseList;
    while (curCourse != nullptr)
    {
        Student* curStudentInCourse = curCourse->Studs;
        while (curStudentInCourse != nullptr)
        {
            if (curStudentInCourse->studentID == studentID)
            {
                cout << "| " << setw(12) << left << curCourse->courseID
                    << "| " << setw(35) << left << curCourse->courseName
                    << "| " << setw(10) << left << curCourse->credits
                    << "| " << setw(8) << left << curStudentInCourse->midtermMark
                    << "| " << setw(6) << left << curStudentInCourse->otherMark
                    << "| " << setw(5) << left << curStudentInCourse->finalMark
                    << "| " << setw(6) << left << curStudentInCourse->totalMark << " |" << endl;
                cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
            }
            curStudentInCourse = curStudentInCourse->pNext;
        }
        curCourse = curCourse->pNext;
    }
}
