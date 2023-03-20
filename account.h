#pragma once

#include "allStruct.h"

void readAccount(Account*& pHead);
void addAccount(Account*& pHead, string username, string password);
Account* takeAccount(Account* pHead, string username);
bool checkAccount(Account* pHead, string username, string password);