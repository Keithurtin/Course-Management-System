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
		mainForm.getData(curAccount, schoolYearList);
		if (loginForm.login)
		{
			Application::Run(% mainForm);
			mainForm.returnData(curAccount, schoolYearList);
			updateAccount(accountList);
			updateSchoolYear(schoolYearList);
			if (!mainForm.logout) break;
		}
		else break;
	}
}