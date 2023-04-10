#include <iostream>
#include "allStruct.h"
#include "account.h"
#include "loginScreen.h"
#include "mainScreen.h"
#include "schoolYear.h"
#include "scoreboard.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[System::STAThreadAttribute] void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//
	//Read info
	//
	Account* accountList = new Account;
	readAccount(accountList);
	Account* curAccount;
	Class* classList = nullptr;
	readClass(classList);
	StudentList* sList = nullptr;
	readStudentList(sList, classList);
	SchoolYear* schoolYearList = nullptr;
	readSchoolYear(schoolYearList, sList);
	//
	//Run program
	//
	while (true)
	{
		UI::loginScreen loginForm;
		UI::mainScreen mainForm;
		loginForm.getData(accountList);
		Application::Run(% loginForm);
		curAccount = loginForm.curAccount;
		mainForm.getData(curAccount, schoolYearList, classList, sList);
		if (loginForm.login)
		{
			Application::Run(% mainForm);
			mainForm.returnData(curAccount, schoolYearList, classList);
			updateAccount(accountList);
			updateSchoolYear(schoolYearList);
			updateClass(classList);
			if (!mainForm.logout) break;
		}
		else break;
	}
	//
	//Delete dynamic arrays
	//
	while (accountList) 
	{
		Account* temp = accountList;
		accountList = accountList->pNext;
		delete temp;
	}

	while (schoolYearList)
	{
		SchoolYear* tempYear = schoolYearList;
		Semester* curSemester = schoolYearList->semesters;
		while (curSemester)
		{
			Semester* tempSemester = curSemester;
			Course* curCourse = curSemester->p_CourseList;
			while (curCourse)
			{
				Course* tempCourse = curCourse;
				curCourse = curCourse->pNext;
				delete tempCourse;
			}
			curSemester = curSemester->p_Next_Semester;
			delete tempSemester;
		}
		schoolYearList = schoolYearList->pNext;
		delete tempYear;
	}

	while (classList)
	{
		Class* tempClass = classList;
		Student* curStud = classList->student;
		while (curStud)
		{
			Student* tempStud = curStud;
			curStud = curStud->pNext;
			delete tempStud;
		}
		classList = classList->pNext;
		delete tempClass;
	}

	while (sList)
	{
		StudentList* temp = sList;
		sList = sList->pNext;
		delete temp;
	}
}