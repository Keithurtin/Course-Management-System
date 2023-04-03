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
	cur->course = curCourse;
	cur->classroom = curClass;
	cur->pNext = nullptr;
	
}

void readStudentList(StudentList* sList, SchoolYear* schoolYear)
{
	while (schoolYear)
	{
		int nClass = schoolYear->numOfClass;
		Class* curClass = schoolYear->classroom;
		for (int i = 0; i < nClass; i++)
		{
			int nStudent = curClass->numOfStudent;
			Student* curStud = curClass->student;
			for (int j = 0; j < nStudent; j++)
				addClassStudentList(sList, curStud->studentID, curClass);
		}
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

void readClass(Class*& classList, int numOfClass, ifstream &fin)
{
	fin.ignore();
	Class* cur = classList;
	for (int i = 0; i < numOfClass; i++)
	{
		getline(fin, cur->name);
		fin >> cur->numOfStudent;

		if (cur->numOfStudent)
		{
			cur->student = new Student;
			readStudent(cur->student, cur->numOfStudent, fin);
			/*Student* curStud = cur->student;
			for (int j = 0; j < cur->numOfStudent; j++)
			{
				cout << curStud->studentID << endl;
				curStud = curStud->pNext;
			}*/
		}
		else fin.ignore();

		if (i == numOfClass - 1)
			cur->pNext = nullptr;
		else
		{
			cur->pNext = new Class;
			cur = cur->pNext;
		}
	}
}

void readSchoolYear(SchoolYear*& pHead)
{
	ifstream fin("Data/schoolYear.txt");

	pHead = new SchoolYear;
	SchoolYear* cur = pHead;

	while (true)
	{
		fin >> cur->startYear >> cur->endYear;
		fin >> cur->numOfClass;

		if (cur->numOfClass)
		{
			cur->classroom = new Class;
			readClass(cur->classroom, cur->numOfClass, fin);
		}
		else fin.ignore();
		

		if (fin.eof())
		{
			cur->pNext = nullptr;
			break;
		}
		cur->pNext = new SchoolYear;
		cur = cur->pNext;
	}
	fin.close();
}

SchoolYear* findTailSchoolYear(SchoolYear* pHead)
{
	if (!pHead) return pHead;
	SchoolYear* cur = pHead;
	if (cur->pNext) cur = cur->pNext;
	return cur;
}

void addSchoolYear(SchoolYear* &schoolYearList, SchoolYear* &curSchoolYear)
{
	SchoolYear* temp = findTailSchoolYear(schoolYearList);
	temp->pNext = curSchoolYear;
	curSchoolYear->pNext = nullptr;
}

void addClass(Class*& classList, Class* &curClass, int &n)
{
	if (n == 0) classList = curClass;
	else
	{
		Class* cur = classList;
		for (int i = 1; i < n; i++)
			cur = cur->pNext;
		cur->pNext = curClass;
	}
	curClass->pNext = nullptr;
	n++;
}

void updateSchoolYear(SchoolYear* pHead)
{
	ofstream fout("Data/schoolYear.txt");

	while (pHead)
	{
		fout << pHead->startYear << " " << pHead->endYear << endl;
		fout << pHead->numOfClass;
		Class* curClass = pHead->classroom;
		for (int i = 0; i < pHead->numOfClass; i++)
		{
			fout << endl << curClass->name << endl << curClass->numOfStudent;
			Student* curStudent = curClass->student;
			for (int j = 0; j < curClass->numOfStudent; j++)
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
			curClass = curClass->pNext;
		}
		if (pHead->pNext) fout << endl;
		pHead = pHead->pNext;
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

// This is a debug function
void output(SchoolYear* pHead)
{
	while (pHead)
	{
		cout << pHead->startYear << " " << pHead->endYear << endl;
		cout << pHead->numOfClass;
		Class* curClass = pHead->classroom;
		for (int i = 0; i < pHead->numOfClass; i++)
		{
			cout << endl << curClass->name << endl << curClass->numOfStudent;
			Student* curStudent = curClass->student;
			for (int j = 0; j < curClass->numOfStudent; j++)
			{
				cout << endl;
				cout << curStudent->No << endl;
				cout << curStudent->studentID << endl;
				cout << curStudent->firstName << endl;
				cout << curStudent->lastName << endl;
				cout << curStudent->gender << endl;
				cout << curStudent->dateOfBirth.day << " " << curStudent->dateOfBirth.month << " " << curStudent->dateOfBirth.year << endl;
				cout << curStudent->socialID;
				curStudent = curStudent->pNext;
			}
			curClass = curClass->pNext;
		}
		if (pHead->pNext) cout << endl;
		pHead = pHead->pNext;
	}
}