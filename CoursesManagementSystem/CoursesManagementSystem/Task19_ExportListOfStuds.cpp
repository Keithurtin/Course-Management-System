#include "allStruct.h"

void ExportListOfStudsInACourse(ofstream& ListOfStuds, Course* Cour){
    ListOfStuds.open("ListOfStudents.csv");
    if(ListOfStuds.is_open() == false){
        cout << "Error writing file. \n";
        return;
    }

    ListOfStuds << "Course ID: " << Cour->courseID << endl;
    ListOfStuds << "Course name: " << Cour->courseName << endl;
    ListOfStuds << "Teacher's name: " << Cour->teacherName << endl;
    ListOfStuds << "No, Student's ID, Name," << endl;

    Student* Stu = Cour->Studs;
    int i = 1;
    while (Stu != nullptr) {
        ListOfStuds << i++ << "," << Stu->studentID << "," << Stu->firstName << " " << Stu->lastName << endl;
        Stu = Stu->pNext;
    }

    ListOfStuds.close();
}
