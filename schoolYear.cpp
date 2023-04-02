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

/*int main()
{
	SchoolYear* schoolYear = nullptr;
	readSchoolYear(schoolYear);
	SchoolYear* newYear = new SchoolYear;
	newYear->startYear = 2023;
	newYear->endYear = 2024;
	newYear->numOfClass = 0;
	addSchoolYear(schoolYear, newYear);
	Class* curClass = new Class;
	curClass->name = "23APCS";
	addClass(newYear->classroom, curClass, newYear->numOfClass);
	//output(schoolYear);
	//updateSchoolYear(schoolYear);
}*/
