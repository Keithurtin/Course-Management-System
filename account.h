#pragma once

#include "allStruct.h"

struct ListAccount
{
	Account* pHead = new Account;

	void read();
	//Account* take(string username);
	void add(string username, string password);
	bool check(string username, string password);
	void changePass(string username, string password);
	void update();
};