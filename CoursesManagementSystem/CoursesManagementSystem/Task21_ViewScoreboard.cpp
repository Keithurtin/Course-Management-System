#include "allStruct.h"

void ViewScoreboardOf1Course(Course* cour){
    Student* Stu = cour->Studs;
    // neu k co course name hay class name thi se k chay dc
    cout << "Scoreboard Of "; // << cour->courseName << "- Class " << cour->className;
    cout << "\n--------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(5) << left << "No"
        << "| " << setw(12) << left << "Student ID"
        << "| " << setw(25) << left << "Full name"
        << "| " << setw(10) << left << "Final "
        << "| " << setw(10) << left << "Midterm "
        << "| " << setw(10) << left << "Other "
        << "| " << setw(10) << left << "Total " << " |" << endl;
    cout << "--------------------------------------------------------------------------------------------------" << endl;
    int i = 1;
    while (Stu != nullptr) {
        cout << "| " << setw(5) << left << i++
            << "| " << setw(12) << left << Stu->studentID
            << "| " << setw(25) << left << Stu->fullname
            << "| " << setw(10) << left << Stu->finalMark
            << "| " << setw(10) << left << Stu->midtermMark
            << "| " << setw(10) << left << Stu->otherMark
            << "| " << setw(10) << left << Stu->totalMark << " |" << endl;
        cout << "--------------------------------------------------------------------------------------------------" << endl;
        Stu = Stu->pNext;
    }
}