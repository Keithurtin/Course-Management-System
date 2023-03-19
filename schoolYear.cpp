#include <iostream>
#include "schoolYear.h"
#include "allStruct.h";

using namespace std;

void createSchoolYear(SchoolYear*& pHead)
{
	cin >> pHead->startYear >> pHead->endYear;
	pHead->classroom = new Class;
	Class* cur = pHead->classroom;
	while (cin >> cur->name)
	{
		cur->student = nullptr;
		if (cur->name == "0")
		{
			cur->pNext = nullptr;
			return;
		}
		cur->pNext = new Class;
		cur = cur->pNext;
	}
}