#include <iostream>
#include "schoolYear.h"
#include "allStruct.h"
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

void addClassStudentList(StudentList* &sList, string ID, Class* curClass)
{
	StudentList* cur;
	if (!sList)
	{
		sList = new StudentList;
		cur = sList;
	}
	else
	{
		cur = sList;
		while (cur->pNext) cur = cur->pNext;
		cur->pNext = new StudentList;
		cur = cur->pNext;
	}
	cur->ID = ID;
	cur->classroom = curClass;
	cur->pNext = nullptr;
	
}

void readStudentList(StudentList* &sList, Class* classList)
{
	while (classList)
	{
		int nStudent = classList->numOfStudent;
		Student* curStud = classList->student;
		for (int i = 0; i < nStudent; i++)
			addClassStudentList(sList, curStud->studentID, classList);
	}
}

void readStudent(Student*& studentList, int numOfStudent, ifstream& fin)
{
	Student* cur = studentList;

	for (int i = 0; i < numOfStudent; i++)
	{
		fin >> cur->No;
		fin.ignore();
		getline(fin, cur->studentID);
		getline(fin, cur->firstName);
		getline(fin, cur->lastName);
		getline(fin, cur->gender);
		fin >> cur->dateOfBirth.day >> cur->dateOfBirth.month >> cur->dateOfBirth.year;
		fin.ignore();
		getline(fin, cur->socialID);

		if (i < numOfStudent - 1)
		{
			cur->pNext = new Student;
			cur = cur->pNext;
		}
	}
}

void readClass(Class*& classList)
{
	ifstream fin("Data/class.txt");

	classList = new Class;
	Class* cur = classList;
	while (true)
	{
		getline(fin, cur->name);
		fin >> cur->numOfStudent;

		if (cur->numOfStudent)
		{
			cur->student = new Student;
			readStudent(cur->student, cur->numOfStudent, fin);
		}
		else fin.ignore();

		if (fin.eof()) break;
		cur->pNext = new Class;
		cur = cur->pNext;
	}

	fin.close();
}

void readSchoolYear(SchoolYear*& pHead)
{
	ifstream fin("Data/schoolYear.txt");

	pHead = new SchoolYear;
	SchoolYear* cur = pHead;

	while (true)
	{
		fin >> cur->startYear >> cur->endYear;
		if (fin.eof()) break;
		cur->pNext = new SchoolYear;
		cur = cur->pNext;
	}

	fin.close();
}

void addSchoolYear(SchoolYear* &schoolYearList, SchoolYear* &curSchoolYear)
{
	if (!schoolYearList) schoolYearList = curSchoolYear;
	else
	{
		SchoolYear* cur = schoolYearList;
		while (cur->pNext) cur = cur->pNext;
		cur->pNext = curSchoolYear;
	}
}

void addClass(Class*& classList, Class* &curClass)
{
	if (!classList) classList = curClass;
	else
	{
		Class* cur = classList;
		while (cur->pNext) cur = cur->pNext;
		cur->pNext = curClass;
	}
}

void updateSchoolYear(SchoolYear* pHead)
{
	ofstream fout("Data/schoolYear.txt");

	while (pHead)
	{
		fout << pHead->startYear << " " << pHead->endYear;
		if (pHead->pNext) fout << endl;
		pHead = pHead->pNext;
	}

	fout.close();
}

void updateClass(Class* curClass)
{
	ofstream fout("Data/class.txt");

	while (curClass)
	{
		fout << curClass->name << endl << curClass->numOfStudent;
		Student* curStudent = curClass->student;
		for (int i = 0; i < curClass->numOfStudent; i++)
		{
			fout << endl;
			fout << curStudent->No << endl;
			fout << curStudent->studentID << endl;
			fout << curStudent->firstName << endl;
			fout << curStudent->lastName << endl;
			fout << curStudent->gender << endl;
			fout << curStudent->dateOfBirth.day << " " << curStudent->dateOfBirth.month << " " << curStudent->dateOfBirth.year << endl;
			fout << curStudent->socialID;
			curStudent = curStudent->pNext;
		}
		if (curClass->pNext) fout << endl;
		curClass = curClass->pNext;
	}

	fout.close();
}

SchoolYear* takeYear(SchoolYear* pHead, int startYear, int endYear)
{
	while (pHead)
	{
		if (pHead->startYear == startYear && pHead->endYear == endYear)
			return pHead;
		pHead = pHead->pNext;
	}
	return pHead;
}

Class* takeClass(Class* classList, string name)
{
	while (classList && classList->name != name)
		classList = classList->pNext;
	return classList;
}

void addStudent(Student*& studentList, Student* student, int &n)
{
	if (n == 0) studentList = student;
	else
	{
		Student* cur = studentList;
		for (int i = 1; i < n; i++)
			cur = cur->pNext;
		cur->pNext = student;
	}
	student->pNext = nullptr;
	n++;
}

void addFileStudent(Student* &studentList, int& n, string path)
{
	ifstream fin(path);

	string line, data, dayta;
	vector<string> row, date;
	getline(fin, line);

	while (true)
	{
		if (fin.eof()) break;
		Student* cur = new Student;
		row.clear();
		date.clear();
		getline(fin, line);
		stringstream s(line);
		while (getline(s, data, ',')) row.push_back(data);
		
		cur->No = stoi(row[0]);
		cur->studentID = row[1];
		cur->firstName = row[2];
		cur->lastName = row[3];
		cur->gender = row[4];
		stringstream day(row[5]);
		while (getline(day, dayta, '/')) date.push_back(dayta);
		cur->dateOfBirth.day = stoi(date[0]);
		cur->dateOfBirth.month = stoi(date[1]);
		cur->dateOfBirth.year = stoi(date[2]);
		cur->socialID = row[6];

		addStudent(studentList, cur, n);
	}

	fin.close();
}