#ifndef _ACCOUNT_UILIT_H_
#define _ACCOUNT_UILIT_H_
#include "Account.h"
#include <vector>
#include <memory>

void display(const vector<shared_ptr<Account>> &account);
void deposit(vector<Account*> &account,double amount);
void withdraw(vector<Account*>&account,double amount);

#endif // _ACCOUNT_UILIT_H_