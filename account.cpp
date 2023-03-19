#include <iostream>
#include <string>
#include <fstream>
#include "allStruct.h"

using namespace std;

void readAccount(Account*& pHead)
{
	ifstream fin("account.txt");

	Account* cur = pHead;

	while (!fin.eof())
	{
		getline(fin, cur->username);
		getline(fin, cur->password);
		cur->pNext = new Account;
		cur = cur->pNext;
	}
	fin.close();

	cur = nullptr;
}