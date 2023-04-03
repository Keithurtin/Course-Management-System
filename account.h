#pragma once
#include "allStruct.h"
#include <string>
#include <iostream>

using namespace std;

void readAccount(Account*& pHead);
Account* findTail(Account* pHead);
Account* takeAccount(Account* pHead, string username, string password);
//void addAccount(Account* &pHead, string username, string password, string role);
void updateAccount(Account*& pHead);
void changePass(Account*& pHead, string username, string oldPass, string newPass);