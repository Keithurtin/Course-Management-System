#include "allStruct.h"

void ViewScoreboardOf1Course(Course* cour){
    Student* Stu = cour->Studs;
    
    cout << "Scoreboard Of " << cour->courseName << "- Class " << cour->className << endl;
    cout << "--------------------------------------------------------------------------------------------------" << endl;
    cout << "| " << setw(5) << left << "No"
        << "| " << setw(12) << left << "Student ID"
        << "| " << setw(25) << left << "Full name"
        << "| " << setw(10) << left << "Final "
        << "| " << setw(10) << left << "Midterm "
        << "| " << setw(10) << left << "Other "
        << "| " << setw(10) << left << "Total " << " |" << endl;
    cout << "--------------------------------------------------------------------------------------------------" << endl;
    while (Stu != nullptr) {
        cout << "| " << setw(5) << left << Stu->No
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