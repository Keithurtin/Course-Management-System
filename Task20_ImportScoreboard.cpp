#include "allStruct.h"
#include "ImportScoreboard.h"

void Input_ScoreboardOfCourse_FromFile(ifstream& Scoreboard, Course*& Cour){
    if (Cour == nullptr) {
        cout << "Error: null pointer passed to function.\n";
        return;
    }
    Scoreboard.open("Scoreboard.csv");
    if(Scoreboard.is_open() == false){
        cout << "Can not open input file. \n";
        return;
    }
    unsigned int count = 0;
    while (!Scoreboard.eof())
    {
        string f = "";
        getline(Scoreboard, f);
        count++;
    }
    Scoreboard.close();

    Scoreboard.open("Scoreboard.csv");
    Cour->maxStudents = count;
    Student* Stu = nullptr, * Head;
    count = 0;
    while(!Scoreboard.eof() && count < Cour->maxStudents){
        if(Stu == nullptr){
            Stu = new Student;
            Head = Stu;
        }
        else
        {
            Stu->pNext = new Student;
            Stu = Stu->pNext;
        }

        string tmp;

        getline(Scoreboard, Stu->studentID, ',');
        getline(Scoreboard, Stu->firstName, ' ');
        getline(Scoreboard, Stu->lastName, ',');

        Stu->fullname = Stu->lastName + " " + Stu->firstName;

        getline(Scoreboard, tmp, ',');
        Stu->finalMark = stoi(tmp);

        getline(Scoreboard, tmp, ',');
        Stu->midtermMark = stoi(tmp);

        getline(Scoreboard, tmp, ',');
        Stu->otherMark = stoi(tmp);

        getline(Scoreboard, tmp, '\n');
        Stu->totalMark = stoi(tmp);

        count++;
        Stu->pNext = nullptr;
    }
    Cour->Studs = Head;
    Scoreboard.close();
}