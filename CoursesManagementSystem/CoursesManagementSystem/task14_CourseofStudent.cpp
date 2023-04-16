#include "allStruct.h"

void viewListOfCoursesEvenStudent(Student* pHead, string studentID, SchoolYear* pHeadYear, int yearstart, int semester)
{
    // Find the SchoolYear that matches the starting year provided as an argument.
    SchoolYear* pYear = pHeadYear;
    while (pYear != nullptr && pYear->startYear != yearstart)
    {
        pYear = pYear->pNext;
    }

    // If the SchoolYear is not found, output an error message and return.
    if (pYear == nullptr)
    {
        cout << "Not found year school start from " << yearstart << endl;
        return;
    }

    // Find the Semester that matches the semester number provided.
    Semester* pSemester = pYear->semesters;
    while (pSemester != nullptr && pSemester->semester_num != semester)
    {
        pSemester = pSemester->p_Next_Semester;
    }

    // If the Semester is not found, output an error message and return.
    if (pSemester == nullptr)
    {
        cout << "Not found semester " << semester << " in year " << yearstart << "-" << yearstart + 1 << endl;
        return;
    }

    // Iterate through each Course in the Semester.
    Course* pCourse = pSemester->p_CourseList;
    while (pCourse != nullptr)
    {
        // Search for the Student with the matching studentID in the Course's linked list of students.
        Student* pStudent = pCourse->Studs;
        while (pStudent != nullptr && pStudent->studentID != studentID)
        {
            pStudent = pStudent->pNext;
        }

     // If the student is found, output a formatted table with information about the course.
    cout << "List of courses for student with ID: " << studentID << " in semester " << pSemester->semester_num << " School year: " << yearstart << " - " << yearstart + 1 << ":" << endl;
    cout<<"Full Name: "<<pStudent->fullname<< endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(12) << left << "Course ID"
        << "| " << setw(35) << left << "Course Name"
        << "| " << setw(20) << left << "Class Name"
        << "| " << setw(25) << left << "Teacher Name"
        << "| " << setw(5) << left << "Credits"
        << "| " << setw(10) << left << "Max Students"
        << "| " << setw(15) << left << "Day of Week"
        << "| " << setw(11) << left << "Session" << " |" << endl;
    cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

        if (pStudent != nullptr)
        {
            cout << "| " << setw(12) << left << pCourse->courseID
                << "| " << setw(35) << left << pCourse->courseName
                << "| " << setw(20) << left << pCourse->className
                << "| " << setw(25) << left << pCourse->teacherName
                << "| " << setw(7) << left << pCourse->credits
                << "| " << setw(12) << left << pCourse->maxStudents
                << "| " << setw(15) << left << pCourse->dayOfWeek
                << "| " << setw(11) << left << pCourse->session << " |" << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
            }


        pCourse = pCourse->pNext;
    }
}

