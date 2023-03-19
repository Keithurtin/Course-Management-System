#include "allStruct.h"
void viewListOfCoursesEvenStudent(Student* pHead, string studentID)
{

    Student* curStudent = pHead;
    while (curStudent != nullptr && curStudent->studentID != studentID) {
        curStudent = curStudent->pNext;
    }
    if (curStudent == nullptr) {
        cout << "Student not found." << endl;
        return;
    }

    cout << "List of courses for student with ID " << studentID << ":" << endl;
    cout<<"Full Name: "<<curStudent->fullname<< endl;
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

    Course* curCourse = curStudent->courseList;
    while (curCourse != nullptr) {
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
