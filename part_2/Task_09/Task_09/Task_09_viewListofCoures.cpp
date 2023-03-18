#include"Part_2.h"
void viewListOfCourses(SchoolYear* pHead)
{
    if (pHead == nullptr)
    {
        cout << "School year is empty." << endl;
        return;
    }
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(12) << left << "Course ID"
        << "| " << setw(25) << left << "Course Name"
        << "| " << setw(20) << left << "Class Name"
        << "| " << setw(25) << left << "Teacher Name"
        << "| " << setw(5) << left << "Credits"
        << "| " << setw(10) << left << "Max Students"
        << "| " << setw(15) << left << "Day of Week"
        << "| " << setw(10) << left << "Session" << " |" << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    Class* curClass = pHead->classroom;
    while (curClass != nullptr) {
        if (curClass->course == nullptr) {
            cout << "| " << setw(12) << left << curClass->name
                << "| " << setw(85) << left << "This class has no courses yet." << " |" << endl;
            cout << "-----------------------------------------------------------------------------------------------------------------------------------------" << endl;
        }
        else {
            Course* curCourse = curClass->course;
            while (curCourse != nullptr) {
                cout << "| " << setw(12) << left << curCourse->courseID
                    << "| " << setw(25) << left << curCourse->courseName
                    << "| " << setw(20) << left << curClass->name
                    << "| " << setw(25) << left << curCourse->teacherName
                    << "| " << setw(7) << left << curCourse->credits
                    << "| " << setw(12) << left << curCourse->maxStudents
                    << "| " << setw(15) << left << curCourse->dayOfWeek
                    << "| " << setw(10) << left << curCourse->session << " |" << endl;
                curCourse = curCourse->pNext;
            }
            cout << "------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
        }
        curClass = curClass->pNext;
    }
}
