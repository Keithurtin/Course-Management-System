#include <iostream>
#include "allStruct.h"
#include "account.h"
#include "loginScreen.h"
#include "mainScreen.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;

[System::STAThreadAttribute] void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Account* accountList = new Account;
	readAccount(accountList);
	Account* curAccount;
	while (true)
	{
		UI::loginScreen loginForm;
		UI::mainScreen mainForm;
		loginForm.getData(accountList);
		Application::Run(% loginForm);
		curAccount = loginForm.curAccount;
		mainForm.getData(curAccount);
		if (loginForm.login)
		{
			Application::Run(% mainForm);
			mainForm.returnData(curAccount);
			if (!mainForm.logout) break;
		}
		else break;
	}
}