#include "Checking.h"

Checking::Checking(string name,double balance)
        :Account{name,balance}{
}
bool Checking::withdraw(double amount){
    amount+=per_check_fee;
    return Account::withdraw(amount);
}
bool Checking::deposit(double amount){
    return Account::deposit(amount);
}
void Checking::print(ostream &out)const {
    out.precision(2);
    out<< fixed;
    out<< "[Updating Account: "<<name << " , " << balance <<"(Including tax)"<<"]";
}