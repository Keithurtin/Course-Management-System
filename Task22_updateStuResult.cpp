#include "allStruct.h"

void updateStuResult(Course*& Cour, int stuID, int final, int midterm, int other, int total){
    string tmp;
    tmp = to_string(stuID);
    Student* Stu = Cour->Studs;
    while (Stu != nullptr) {
        if (Stu->studentID == tmp){
            Stu->finalMark = final;
            Stu->midtermMark = midterm;
            Stu->otherMark = other;
            Stu->totalMark = total;
            break;
        }
        Stu = Stu->pNext;
    }
}