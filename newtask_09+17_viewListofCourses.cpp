#include "allStruct.h"

//Nhap vao node dau tien cua nam hoc, nam hoc va hoc ki muon kiem cac khoa hoc
void printCoursesInSemester(SchoolYear* pHead, int yearstart, int semester)
{
    SchoolYear* currentYear = pHead;
    while (currentYear != nullptr && currentYear->startYear != yearstart) {
        currentYear = currentYear->pNext;
    }
    if (currentYear == nullptr) {
        cout << "Khong tim thay nam hoc " << yearstart << endl;
        return;
    }

    Semester* currentSemester = currentYear->semesters;
    while (currentSemester != nullptr && currentSemester->semester_num != semester) {
        currentSemester = currentSemester->p_Next_Semester;
    }
    if (currentSemester == nullptr) {
        cout << "Not found " << semester << " in " << yearstart << "-" << yearstart + 1 << endl;
        return;
    }
    cout << "List of courses in semester " << semester << "/" << yearstart << "-" << yearstart + 1 << ": " << endl;
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

    Course* curCourse = currentSemester->p_CourseList;
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
