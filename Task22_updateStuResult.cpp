#include "allStruct.h"

void updateStuResult(Course*& Cour, int stuID, int final, int midterm, int other, int total){
    if(Cour == nullptr) return;
    string tmp;
    tmp = to_string(stuID);
    Student* Stu = Cour->Studs;
    while (Stu != nullptr) {
        if (Stu->studentID == tmp){
            Stu->finalMark = final;
            Stu->midtermMark = midterm;
            Stu->otherMark = other;
            Stu->totalMark = total;
            return;
        }
        Stu = Stu->pNext;
    }
    cout << "Student ID not found! Please try again." << endl;
}