#include <iostream>
#include <string>
#include <fstream>
#include "allStruct.h"
#include "account.h"

using namespace std;

void readAccount(Account* &pHead)
{
	ifstream fin("Data/account.txt");

	Account* cur = pHead;

	while (true)
	{
		getline(fin, cur->username);
		getline(fin, cur->password);
		getline(fin, cur->role);

		//cout << cur->username << endl << cur->password << endl << cur->role << endl;
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

Account* takeAccount(Account* pHead, string username, string password)
{
	while (pHead != nullptr)
	{
		if (pHead->username == username && pHead->password == password) return pHead;
		pHead = pHead->pNext;
	}
	return nullptr;
}

void addAccount(Account* &pHead, string username, string password, string role)
{
	Account* temp = takeAccount(pHead, username, password);
	if (temp)
	{
		cout << "Account already exists";
		return;
	}

	ofstream fout("Data/account.txt", ios::app);
	fout << endl << username << endl << password << endl << role;

	Account* newAcc = findTail(pHead);
	newAcc->pNext = new Account;
	newAcc = newAcc->pNext;
	newAcc->username = username;
	newAcc->password = password;
	newAcc->role = role;
	newAcc->pNext = nullptr;

	fout.close();
}

void update(Account* &pHead)
{
	ofstream fout("Data/account.txt");
	Account* cur = pHead;
	
	while(cur != nullptr)
	{
		fout << cur->username << endl << cur->password << endl << cur->role;
		if (cur->pNext) fout << endl;
		cur = cur->pNext;
	}

	fout.close();
}

void changePass(Account* &pHead, string username, string password)
{
	Account* temp = takeAccount(pHead, username, password);
	if (temp) 
		temp->password = password;
}