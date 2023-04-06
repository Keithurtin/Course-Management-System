#include <iostream>
#include "allStruct.h"
#include "account.h"
#include "loginScreen.h"
#include "mainScreen.h"
#include "schoolYear.h"

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
	SchoolYear* schoolYearList = nullptr;
	readSchoolYear(schoolYearList);
	Class* classList = nullptr;
	readClass(classList);
	//
	//
	//
	while (true)
	{
		UI::loginScreen loginForm;
		UI::mainScreen mainForm;
		loginForm.getData(accountList);
		Application::Run(% loginForm);
		curAccount = loginForm.curAccount;
		mainForm.getData(curAccount, schoolYearList, classList);
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
}