#include <iostream>
#include "schoolYear.h"
#include "allStruct.h"
#include <fstream>

using namespace std;

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
			cur->classroom = new Class;
		Class* classList = cur->classroom;
		fin.ignore();
		for (int i=0; i<cur->numOfClass; i++)
		{
			getline(fin, classList->name);
			if (i == cur->numOfClass - 1) 
				classList->pNext = nullptr;
			else
			{
				classList->pNext = new Class;
				classList = classList->pNext;
			}
		}

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

SchoolYear* findTail(SchoolYear* pHead)
{
	if (!pHead) return pHead;
	SchoolYear* cur = pHead;
	if (cur->pNext) cur = cur->pNext;
	return cur;
}

void addSchoolYear(SchoolYear* &schoolYearList, SchoolYear* curSchoolYear)
{
	SchoolYear* temp = findTail(schoolYearList);
	temp->pNext = curSchoolYear;
	curSchoolYear->pNext = nullptr;
}

void update(SchoolYear* pHead)
{
	ofstream fout("Data/schoolYear.txt");

	while (pHead)
	{
		fout << pHead->startYear << " " << pHead->endYear << endl;
		fout << pHead->numOfClass;
		Class* curClass = pHead->classroom;
		for (int i = 0; i < pHead->numOfClass; i++)
		{
			fout << endl << curClass->name;
			curClass = curClass->pNext;
		}
		if (pHead->pNext) fout << endl;
		pHead = pHead->pNext;
	}

	fout.close();
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
			cout << endl << curClass->name;
			curClass = curClass->pNext;
		}
		if (pHead->pNext) cout << endl;
		pHead = pHead->pNext;
	}
}

/*int main()
{
	SchoolYear* schoolYear = nullptr;
	readSchoolYear(schoolYear);
	SchoolYear* newYear = new SchoolYear;
	newYear->startYear = 2023;
	newYear->endYear = 2024;
	newYear->numOfClass = 1;
	newYear->classroom = new Class;
	newYear->classroom->name = "APCS";
	newYear->classroom->pNext = nullptr;
	addSchoolYear(schoolYear, newYear);
	//output(schoolYear);
	update(schoolYear);
}*/
