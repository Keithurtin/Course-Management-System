#include "allStruct.h"
#include "ImportScoreboard.h"

void Input_ScoreboardOfCourse_FromFile(ifstream& Scoreboard, Course& Cour){
    Scoreboard.open("Scoreboard.csv");
    if(Scoreboard.is_open() == false){
        cout << "Can not open input file. \n";
        return;
    }

    int i = 0;
    while (!Scoreboard.eof())
    {
        string f = "";
        getline(Scoreboard, f);
        i++;
    }
    Scoreboard.close();

    Scoreboard.open("Scoreboard.csv");
    Cour.maxStudents = i;
    Cour.Studs = new Student[Cour.maxStudents];
    i = 0;
    while(!Scoreboard.eof()){
        Scoreboard  >> Cour.Studs[i].No;
        Scoreboard.ignore();
        getline(Scoreboard, Cour.Studs[i].studentID);
        Scoreboard.ignore();
        getline(Scoreboard, Cour.Studs[i].fullname);
        Scoreboard  >> Cour.Studs[i].totalMark
                    >> Cour.Studs[i].finalMark 
                    >> Cour.Studs[i].midtermMark 
                    >> Cour.Studs[i].otherMark;
        i++;
    }
    Scoreboard.close();
}


