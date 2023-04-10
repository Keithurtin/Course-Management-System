#include"allStruct.h"

void printStudentMarksInSemester(string studentID, SchoolYear* pHeadYear, int school_year, int semester_num)
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

    cout << "Transcript for student with ID " << studentID << " in semester " << semester_num << " - School year: " << school_year << " - " << school_year + 1 << ":" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(12) << left << "Course ID"
        << "| " << setw(35) << left << "Course Name"
        << "| " << setw(10) << left << "Credits"
        << "| " << setw(10) << left << "Midterm"
        << "| " << setw(10) << left << "Other"
        << "| " << setw(10) << left << "Final"
        << "| " << setw(10) << left << "Total" << " |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

    // Find the student node with the specified student ID in all courses in the semester
    Course* curCourse = pSemester->p_CourseList;
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
                    << "| " << setw(10) << left << curStudentInCourse->midtermMark
                    << "| " << setw(10) << left << curStudentInCourse->otherMark
                    << "| " << setw(10) << left << curStudentInCourse->finalMark
                    << "| " << setw(10) << left << curStudentInCourse->totalMark << " |" << endl;
                cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
            }
            curStudentInCourse = curStudentInCourse->pNext;
        }
        curCourse = curCourse->pNext;
    }
}
