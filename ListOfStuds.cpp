#include "ListOfStuds.h"
#include "allStruct.h"

void ExportListOfStudsInACourse(ofstream& ListOfStuds, Course Cour){
    ListOfStuds.open("ListOfStudents.csv");
    if(ListOfStuds.is_open() == false){
        cout << "Error writing file. \n";
        return;
    }

    ListOfStuds << "Course ID: " << Cour.courseID << endl;
    ListOfStuds << "Course name: " << Cour.courseName << endl;
    ListOfStuds << "Teacher's name: " << Cour.teacherName << endl;
    ListOfStuds << "Student's ID, Gender, Name" << endl;

    for(int i = 0; i < Cour.maxStudents; i++){
        ListOfStuds << Cour.Studs[i].studentID << "," << Cour.Studs[i].gender << "," << Cour.Studs[i].fullname << endl;
    }

    ListOfStuds.close();
}
