#include "allStruct.h"

void viewListOfCourses(Semester* pCurrentSemester, int year, int semester)
{
    if (pCurrentSemester == nullptr)
    {
        cout << "No current semester found." << endl;
        return;
    }

    if (pCurrentSemester->school_year.year != year || pCurrentSemester->semester_num != semester)
    {
        cout << "No courses found for semester " << semester << " of school year " << year<< "-"<< year + 1 << endl;
        return;
    }

    cout << "List of courses in semester " << pCurrentSemester->semester_num << " - School year: " << pCurrentSemester->school_year.year << " - " << pCurrentSemester->school_year.year + 1 << endl;
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

    Course* curCourse = pCurrentSemester->p_CourseList;
    while (curCourse != nullptr)
    {
        cout << "| " << setw(12) << left << curCourse->courseID
            << "| " << setw(35) << left << curCourse->courseName
            << "| " << setw(20) << left << curCourse->className
            << "| " << setw(25) << left << curCourse->teacherName
            << "| " << setw(7) << left << curCourse->credits
            << "| " << setw(12) << left << curCourse->maxStudents
            << "| " << setw(15) << left << curCourse->dayOfWeek
            << "| " << setw(11) << left << curCourse->session << " |" << endl;
        cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        curCourse = curCourse->pNext;
    }
}
