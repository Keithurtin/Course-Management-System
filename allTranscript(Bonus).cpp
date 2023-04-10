#include "allStruct.h"

void printStudentTranscript(const string& studentID, SchoolYear* pHeadYear) {
    bool foundStudent = false;

    cout << "---------------------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(12) << left << "Year"
        << "| " << setw(12) << left << "Semester"
        << "| " << setw(12) << left << "Course ID"
        << "| " << setw(35) << left << "Course Name"
        << "| " << setw(10) << left << "Credits"
        << "| " << setw(10) << left << "Midterm"
        << "| " << setw(10) << left << "Other"
        << "| " << setw(10) << left << "Final"
        << "| " << setw(10) << left << "Total" << " |" << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------------------" << endl;

    for (SchoolYear* pYear = pHeadYear; pYear != nullptr; pYear = pYear->pNext) { // duyệt qua từng năm học
        for (Semester* pSemester = pYear->semesters; pSemester != nullptr; pSemester = pSemester->p_Next_Semester) { // duyệt qua từng học kì
            for (Course* pCourse = pSemester->p_CourseList; pCourse != nullptr; pCourse = pCourse->pNext) { // duyệt qua từng khóa học
                for (Student* pStud = pCourse->Studs; pStud != nullptr; pStud = pStud->pNext) { // kiểm tra xem sinh viên đó đã tham gia khóa học đó chưa
                    if (pStud->studentID == studentID) {
                        foundStudent = true;
                        cout << "| " << setw(8) << left << pYear->startYear << pYear->startYear +1
                            << "| " << setw(12) << left << pSemester->semester_num
                            << "| " << setw(12) << left << pCourse->courseID
                            << "| " << setw(35) << left << pCourse->courseName
                            << "| " << setw(10) << left << pCourse->credits
                            << "| " << setw(10) << left << pStud->midtermMark
                            << "| " << setw(10)<< left << pStud->otherMark
                            << "| " << setw(10) << left << pStud->finalMark
                            << "| " << setw(10) << left << pStud->totalMark << " |" << endl;
                        cout << "---------------------------------------------------------------------------------------------------------------------------------------------" << endl;
                    }
                }
            }
        }
    }

    if (!foundStudent)
    {
        cout << "Student ID " << studentID << " not found in any courses." << endl;
    }
}

