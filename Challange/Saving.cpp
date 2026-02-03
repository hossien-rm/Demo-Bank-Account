#include "Saving.h"

Saving::Saving(string name,double balance,double int_rate)
       : Account{name,balance},int_rate{int_rate}{
}
bool Saving::withdraw(double amount){
     return Account::withdraw(amount);  
}  
bool Saving::deposit(double amount){
    amount+=amount *(int_rate/100);
    return Account::deposit(amount);
}
void Saving::print(ostream &out)const {
    out.precision(2);
    out<< fixed;
    out <<"[Saving Account: " << name << " , " << balance <<" , "<<int_rate << "]";
} 