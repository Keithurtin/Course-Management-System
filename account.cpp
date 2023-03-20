#include <iostream>
#include <string>
#include <fstream>
#include "allStruct.h"
#include "account.h"

using namespace std;

void ListAccount::read()
{
	ifstream fin("Data/account.txt");

	Account* cur = pHead;

	while (true)
	{
		getline(fin, cur->username);
		getline(fin, cur->password);

		cout << cur->username << endl << cur->password << endl;
		if (fin.eof())
		{
			cur->pNext = nullptr;
			fin.close();
			return;
		}
		cur->pNext = new Account;
		cur = cur->pNext;
	}
}

Account* findTail(Account* pHead)
{
	while (pHead->pNext != nullptr) pHead = pHead->pNext;
	return pHead;
}

Account* takeAccount(Account* pHead, string username)
{
	while (pHead != nullptr)
	{
		if (pHead->username == username) return pHead;
		pHead = pHead->pNext;
	}
	return nullptr;
}

void ListAccount::add(string username, string password)
{
	Account* temp = takeAccount(pHead, username);
	if (temp)
	{
		cout << "Account already exists";
		return;
	}

	ofstream fout("Data/account.txt", ios::app);
	fout << endl << username << endl << password;

	Account* newAcc = findTail(pHead);
	newAcc->pNext = new Account;
	newAcc = newAcc->pNext;
	newAcc->username = username;
	newAcc->password = password;
	newAcc->pNext = nullptr;

	fout.close();
}

bool ListAccount::check(string username, string password)
{
	Account* temp = takeAccount(pHead, username);
	if (!temp) return false;
	if (temp->password != password) return false;
	return true;
}