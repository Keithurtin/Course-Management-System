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
		getline(fin, cur->firstName);
		getline(fin, cur->lastName);
		getline(fin, cur->role);
		if (cur->role == "student") getline(fin, cur->StudentID);
		getline(fin, cur->Gender);
		fin >> cur->dateOfBirth.day >> cur->dateOfBirth.month >> cur->dateOfBirth.year;
		fin.ignore();
		getline(fin, cur->socialID);
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

/*void addAccount(Account*& pHead, string username, string password, string role)
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
}*/

void updateAccount(Account* &pHead)
{
	ofstream fout("Data/account.txt");
	Account* cur = pHead;
	
	while(cur != nullptr)
	{
		fout << cur->username << endl;
		fout << cur->password << endl;
		fout << cur->firstName << endl;
		fout << cur->lastName << endl;
		fout << cur->role << endl;
		if (cur->role == "student") fout << cur->StudentID << endl;
		fout << cur->Gender << endl;
		fout << cur->dateOfBirth.day << " " << cur->dateOfBirth.month << " " << cur->dateOfBirth.year << endl;
		fout << cur->socialID;
		if (cur->pNext) fout << endl;
		cur = cur->pNext;
	}

	fout.close();
}

void changePass(Account* &pHead, string username, string oldPass, string newPass)
{
	Account* temp = takeAccount(pHead, username, oldPass);
	temp->password = newPass;
}

// This is a debug function
void output(Account* pHead)
{
	Account* cur = pHead;

	while (cur != nullptr)
	{
		cout << cur->username << endl;
		cout << cur->password << endl;
		cout << cur->firstName << endl;
		cout << cur->lastName << endl;
		cout << cur->role << endl;
		if (cur->role == "student") cout << cur->StudentID << endl;
		cout << cur->Gender << endl;
		cout << cur->dateOfBirth.day << " " << cur->dateOfBirth.month << " " << cur->dateOfBirth.year << endl;
		cout << cur->socialID;
		if (cur->pNext) cout << endl;
		cur = cur->pNext;
	}
}