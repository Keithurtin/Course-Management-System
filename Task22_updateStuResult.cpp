#include "allStruct.h"

void updateStuResult(Course*& Cour){
    string final = "", midterm = "", other = "", total = "";
    string stuID = "";
    cout << "Student ID: ";
    getline(cin, stuID, '\n');
    bool found = false;
    Student* Stu = Cour->Studs;
    while (Stu != nullptr) {
        if (Stu->studentID == stuID){
            cout << "Please input the new score." << endl;
            cout << "Final Mark: ";
            getline(cin, final, '\n');
            Stu->finalMark = stof(final);
            cout << "Midterm Mark: ";
            getline(cin, midterm, '\n');
            Stu->midtermMark = stof(midterm);
            cout << "Other Mark: ";
            getline(cin, other, '\n');
            Stu->otherMark = stof(other);
            cout << "Total Mark: ";
            getline(cin, total, '\n');
            Stu->totalMark = stof(total);
            found = true;
            break;
        }
        Stu = Stu->pNext;
    }
    if(!found) cout << "Student ID not found, please try again." << endl;
    return;
}