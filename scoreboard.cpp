#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <sstream>
#include "scoreboard.h"
#include "schoolYear.h"
#include "allStruct.h"

using namespace std;

void exportStudent(Course* curCourse, string path)
{
	ofstream fout(path, ios::app);
	fout << "No,Student ID,Full name,Total Mark,Final Mark,Midterm Mark,Other Mark\n";

	Student* curStud = curCourse->Studs;
	for (int i = 0; i < curCourse->curStudent; i++)
	{
		fout << curStud->No << ",";
		fout << curStud->studentID << ",";
		fout << curStud->lastName + " " + curStud->firstName;
		if (i < curCourse->curStudent - 1) fout << "\n";
		curStud = curStud->pNext;
	}

	fout.close();
}

void updateScoreboard(Course* curCourse)
{
	ofstream fout("Data/" + curCourse->courseID + "Scoreboard.txt");

	Student* curStud = curCourse->Studs;
	for (int i = 0; i < curCourse->curStudent; i++)
	{
		fout << curStud->totalMark << endl;
		fout << curStud->finalMark << endl;
		fout << curStud->midtermMark << endl;
		fout << curStud->otherMark;
		if (i < curCourse->curStudent - 1) fout << endl;
		curStud = curStud->pNext;
	}

	fout.close();
}

void importScoreboard(Course*& curCourse, string path)
{
	ifstream fin(path);

	string line, data;
	vector<string> row;
	getline(fin, line);
	Student* cur = curCourse->Studs;

	for (int i = 0; i < curCourse->curStudent; i++)
	{
		row.clear();
		getline(fin, line);
		stringstream s(line);
		while (getline(s, data, ',')) row.push_back(data);
		cur->totalMark = stof(row[3]);
		cur->finalMark = stoi(row[4]);
		cur->midtermMark = stoi(row[5]);
		cur->otherMark = stoi(row[6]);
		cur = cur->pNext;
	}

	fin.close();

	ofstream fout("Data/" + curCourse->courseID + "Scoreboard.txt", ios::app);
	fout.close();
	updateScoreboard(curCourse);
}

void readScoreboard(Course*& curCourse)
{
	ifstream fin("Data/" + curCourse->courseID + "Scoreboard.txt");

	Student* curStud = curCourse->Studs;
	for (int i = 0; i < curCourse->curStudent; i++)
	{
		fin >> curStud->totalMark;
		fin >> curStud->finalMark;
		fin >> curStud->midtermMark;
		fin >> curStud->otherMark;
		curStud = curStud->pNext;
	}

	fin.close();
}