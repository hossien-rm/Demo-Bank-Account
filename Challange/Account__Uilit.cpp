#include "Account__Uilit.h"

void display(const vector<shared_ptr<Account>> &account){
    cout << "\n====Display Accounts=========================" << endl;
    for (const auto &list:account)
        cout << *list << endl;
}
void deposit (vector <Account*> &account,double amount){
     cout << "\n====Deposit to Accounts=========================" << endl;
    for(auto list:account)
     if (list->deposit(amount)){
         cout <<"Deposited " <<amount <<" to " << *list << endl;
     }else{
         cout << "Failed Deposit of " << amount << " to " << *list << endl;
    }   
}
void withdraw (vector <Account*> &accounts,double amount) {
    cout << "\n====Withdrawing from Accounts=========================" << endl;
    for (auto list:accounts)
     if (list->withdraw(amount)){
        cout << "Withdraw " << amount << " from " << *list << endl;
     }else{
        cout << "Failed Withdrawal of " << amount << " from " << *list << endl;
     }
}