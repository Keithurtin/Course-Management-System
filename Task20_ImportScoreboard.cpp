#include "allStruct.h"
#include "ImportScoreboard.h"

void Input_ScoreboardOfCourse_FromFile(ifstream& Scoreboard, Course& Cour){
    Scoreboard.open("Scoreboard.csv");
    if(Scoreboard.is_open() == false){
        cout << "Can not open input file. \n";
        return;
    }

    Cour.Studs = new Student[Cour.maxStudents];
    for(int i = 0; i < Cour.maxStudents; i++){
        Scoreboard  >> Cour.Studs[i].No 
                    >> Cour.Studs[i].studentID;
        Scoreboard.ignore();
        getline(Scoreboard, Cour.Studs[i].fullname);
        Scoreboard  >> Cour.Studs[i].totalMark
                    >> Cour.Studs[i].finalMark 
                    >> Cour.Studs[i].midtermMark 
                    >> Cour.Studs[i].otherMark;
    }
    Scoreboard.close();
}


